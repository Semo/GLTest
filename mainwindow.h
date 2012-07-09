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
private:
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
