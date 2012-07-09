#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  void resizeEvent(QResizeEvent * event);
  ~MainWindow();

public slots:
  void translate();
  void rotateX();
  void rotateY();
  void rotateZ();
  void scale();
private:
  Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
