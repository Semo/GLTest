#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QWidget>
#include <QtOpenGL/QGLWidget>

#include <QtOpenGL/QGLBuffer>
#include <QtOpenGL/QGLShader>
#include <QtOpenGL/QGLShaderProgram>
#include <QKeyEvent>
#include <QTimer>



#define NUM_BUFFERS 3
#define INDICES 0
#define VERTICES 1
#define COLORS 2
#define X 0
#define Y 1
#define Z 2

class GLWidget : public QGLWidget
{
  Q_OBJECT
public:
  explicit GLWidget(QWidget *parent = 0);
  ~GLWidget();

  void initializeGL();
  void paintGL();
  void resizeGL();

  void keyPressEvent(QKeyEvent *event);

signals:

public slots:
  void translate(GLfloat x, GLfloat y, GLfloat z);
  void rotateX(GLfloat angle);
  void rotateY(GLfloat angle);
  void rotateZ(GLfloat angle);
  void scale(GLfloat factor);
  void timerRotation();

private:

  QGLBuffer* buffers[NUM_BUFFERS];
  QGLShaderProgram* shaderProgram;

  GLint vertexBufferLocation;
  GLint colorBufferLocation;

  GLint modelMatrixLocation;
  GLint viewMatrixLocation;
  GLint projectionMatrixLocation;

  GLfloat angle;

  QMatrix4x4 viewMatrix;
  QMatrix4x4 projectionMatrix;

  QMatrix4x4 transMatrix[3];
  QMatrix4x4 modelMatrix;

  void loadOBJ();

  QTimer *timer;

  GLfloat trans[3];
  GLfloat rot[3];
  GLfloat factor;




};

#endif // GLWIDGET_H
