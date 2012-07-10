#include "glwidget.h"
#include <iostream>
#include "objloader.h"
#include <QLocale>
#include <QKeyEvent>

using namespace std;


GLWidget::GLWidget(QWidget *parent): QGLWidget(parent){}

QTimer *timer;

GLWidget::~GLWidget() {
  if(buffers) {
      if(buffers[VERTICES])
        buffers[VERTICES]->destroy();
      if(buffers[INDICES])
        buffers[INDICES]->destroy();
    }
}

void GLWidget::keyPressEvent(QKeyEvent *event) {
  if(event->key() == Qt::Key_Up) {
      cout << "Test" << endl;
      updateGL();
    }
}

void GLWidget::translate(GLfloat x, GLfloat y, GLfloat z){
  trans[X] = x;
  trans[Y] = y;
  trans[Z] = z;
  cout << "translate" << endl;
  updateGL ();
}

void GLWidget::rotateX(GLfloat angle){
  rot[X] = angle;
  updateGL ();
}

void GLWidget::rotateY(GLfloat angle){
  rot[Y] = angle;
  updateGL ();
}


void GLWidget::rotateZ(GLfloat angle){
  rot[Z] = angle;
  updateGL ();
}

void GLWidget::scale(GLfloat factor){
  this->factor = factor;
  updateGL ();
}

void GLWidget::loadOBJ() {
  vector<float> *vertices, *normals, *textures;
  vector<unsigned short>* f_indices, *n_indices, *t_indices;

  vertices = new vector<float>;
  normals = new vector<float>;
  textures = new vector<float>;
  f_indices = new vector<unsigned short>;
  n_indices = new vector<unsigned short>;
  t_indices = new vector<unsigned short>;

  parse("/home/semo/cube2.obj", vertices, normals, textures, f_indices, n_indices, t_indices);

  buffers[VERTICES] = new QGLBuffer(QGLBuffer::VertexBuffer);
  buffers[INDICES] = new QGLBuffer(QGLBuffer::IndexBuffer);

  buffers[VERTICES]->create();
  buffers[INDICES]->create();

  buffers[VERTICES]->bind();
  buffers[VERTICES]->allocate(&(*vertices)[0], vertices->size() * sizeof(float));
  QGLBuffer::release(QGLBuffer::VertexBuffer);

  buffers[INDICES]->bind();
  buffers[INDICES]->allocate(&(*f_indices)[0], f_indices->size() * sizeof(unsigned short));
  QGLBuffer::release(QGLBuffer::IndexBuffer);
}


void GLWidget::initializeGL() {
  //Scale Helper. Initial Value.
  factor = 1;

  //IMPORTANT: SETS LOCALE FOR KOMMA RECOGNITION
  QLocale::setDefault (QLocale::C);
  loadOBJ();
  Q_INIT_RESOURCE(glslResources);
  QGLShader vertexShader(QGLShader::Vertex);
  vertexShader.compileSourceFile(":vert");
  QGLShader fragmentShader(QGLShader::Fragment);
  fragmentShader.compileSourceFile(":frag");

  shaderProgram = new QGLShaderProgram(context());
  shaderProgram->addShader(&vertexShader);
  shaderProgram->addShader(&fragmentShader);
  shaderProgram->link();

  vertexBufferLocation = shaderProgram->attributeLocation("vertexAttribute");
  if(vertexBufferLocation == -1) {
      qDebug() << "Error Vertex Buffer Location (Vertex)";
    }

  modelMatrixLocation = shaderProgram->uniformLocation("modelMatrix");
  if(modelMatrixLocation == -1) {
      qDebug() << "Error";
    }

  viewMatrixLocation = shaderProgram->uniformLocation("viewMatrix");
  if(viewMatrixLocation == -1) {
      qDebug() << "Error";
    }

  projectionMatrixLocation = shaderProgram->uniformLocation("projectionMatrix");
  if(projectionMatrixLocation == -1) {
      qDebug() << "Error";
    }

  viewMatrix.setToIdentity();
  viewMatrix.lookAt(QVector3D(0.0, 0.0, -1.0),
                    QVector3D(0.0, 0.0, 0.0),
                    QVector3D(0.0, 1.0, 0.0));

  glClearColor(0.0, 0.0, 0.0, 1.0);
  timer = new QTimer(this);
  connect(timer, SIGNAL(timeout()), this, SLOT(timerRotation()));
  timer->setInterval(2);
  timer->start();
}

#define PI 3.1459f
#define RAD_TO_DEG(X) (X * 180 / PI)
void GLWidget::timerRotation() {
  angle += PI / 180 * 5;
  updateGL();
}

void GLWidget::paintGL() {
  glClear(GL_COLOR_BUFFER_BIT);
  modelMatrix.setToIdentity();
  modelMatrix.translate(trans[X], trans[Y], trans[Z]);
  modelMatrix.rotate (angle,0.0, 1.0, 0.0);
  modelMatrix.rotate (angle*2, 0.0, 0.0, 1.0);
  modelMatrix.rotate (rot[X], 1.0, 0.0, 0.0);
  modelMatrix.rotate (rot[Y], 0.0, 1.0, 0.0);
  modelMatrix.rotate (rot[Z], 0.0, 0.0, 1.0);
  modelMatrix.scale (factor);
  shaderProgram->bind();
  shaderProgram->enableAttributeArray(vertexBufferLocation);
  shaderProgram->setUniformValue(modelMatrixLocation, modelMatrix);
  shaderProgram->setUniformValue(viewMatrixLocation, viewMatrix);
  shaderProgram->setUniformValue(projectionMatrixLocation, projectionMatrix);
  buffers[VERTICES]->bind();
  shaderProgram->setAttributeBuffer(vertexBufferLocation, GL_FLOAT, 0, 3);
  QGLBuffer::release(QGLBuffer::VertexBuffer);
  buffers[INDICES]->bind();
  glDrawElements(GL_QUADS, buffers[INDICES]->size() / sizeof(unsigned short), GL_UNSIGNED_SHORT,0);
  QGLBuffer::release(QGLBuffer::IndexBuffer);
  shaderProgram->disableAttributeArray(vertexBufferLocation);
  shaderProgram->release();
}

#undef ROTATE
#undef TRANSLATE
#undef SCALE
#undef PI
#undef RAD_TO_DEG

void GLWidget::resizeGL() {
  glViewport(0,0, width(), height());
  projectionMatrix.setToIdentity();
  projectionMatrix.perspective(90.0f, (qreal)width()/(qreal)height(), 0.0001f, 1000.0f);
}
