#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::resizeEvent(QResizeEvent * event) {
  int w = event->size().width() - 203;
  int h = event->size().height() - 171;

  ui->glwidget->resize(ui->glwidget->minimumWidth() + w, ui->glwidget->minimumHeight() + h);
  ui->glwidget->resizeGL();
  ui->groupBox->move(520 + w - 491, ui->groupBox->y());



}

void MainWindow::translate() {

  GLfloat x = ui->transX->text ().toFloat ();
  GLfloat y = ui->transY->text ().toFloat ();
  GLfloat z = ui->transZ->text ().toFloat ();
  ui->glwidget->translate (x,y,z);
}

void MainWindow::rotateX() {

  GLfloat angle = ui->roteX->text ().toFloat ();
  ui->glwidget->rotateX (angle);

}

void MainWindow::rotateY() {

  GLfloat angle = ui->roteY->text ().toFloat ();
  ui->glwidget->rotateY (angle);

}

void MainWindow::rotateZ() {

  GLfloat angle = ui->roteZ->text ().toFloat ();
  ui->glwidget->rotateZ (angle);
}


void MainWindow::scale() {
  GLfloat factor = ui->scaleFac->text ().toFloat ();
  ui->glwidget->scale (factor);
}
