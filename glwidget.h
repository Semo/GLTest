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

    GLfloat transX;

signals:

public slots:
    void translate();
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




};

#endif // GLWIDGET_H
