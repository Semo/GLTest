#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QWidget>
#include <QtOpenGL/QGLWidget>
#include <QtOpenGL/QGLBuffer>
#include <QtOpenGL/QGLShader>
#include <QtOpenGL/QGLShaderProgram>
#include <QKeyEvent>
#include <QTimer>

/**
 * Some final Constants defined required by GL Objects
 */
#define NUM_BUFFERS 3
#define INDICES 0
#define VERTICES 1
#define COLORS 2
#define X 0
#define Y 1
#define Z 2

/**
 *
 * @author François Dubois <siokdub@gmail.com>
 * @author Sebastian Morkisch <semox78@gmail.com>
 *
 * @brief The GLWidget class
 */

class GLWidget : public QGLWidget {

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

  /**
   * @brief translate - Translates a GL Object
   * @param x
   * @param y
   * @param z
   */
  void translate(GLfloat x, GLfloat y, GLfloat z);

  /**
   * @brief rotateX - Rotates a GL Object around X-Axis
   * @param angle
   */
  void rotateX(GLfloat angle);

  /**
   * @brief rotateY - Rotates a GL Object around Y-Axis
   * @param angle
   */
  void rotateY(GLfloat angle);

  /**
   * @brief rotateZ - Rotates a GL Object around Z-Axis
   * @param angle
   */
  void rotateZ(GLfloat angle);

  /**
   * @brief scale - Scales a GL Object by a scale factor
   * @param factor
   */
  void scale(GLfloat factor);

  /**
   * @brief timerRotation - Is used to set Rotation Speed
   */
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
