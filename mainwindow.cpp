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
    int w = event->size().width() - 353;
    int h = event->size().height() - 171;

    //std::cout << w << "x" << h << std::endl;

    ui->glwidget->resize(ui->glwidget->minimumWidth() + w, ui->glwidget->minimumHeight() + h);
    ui->glwidget->resizeGL();
    ui->groupBox->move(680 + w - 491, ui->groupBox->y());
}
