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

  ui->glwidget->transX = (GLfloat) ui->transX->text ().toFloat ();
}
