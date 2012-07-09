#include <QtGui/QApplication>
#include "mainwindow.h"

/**
 * Der Programmeinsprungspunkt der Applikation. Ruft MainWindow auf, welches die
 * UI der Applikation aufruft.
 *
 * @author François Dubois <siokdub@gmail.com>
 * @author Sebastian Morkisch <semox78@gmail.com>
 *
 * @brief main
 * @param argc
 * @param argv
 * @return
 */

int main(int argc, char *argv[]) {
  //Basiskontext der Qt Applikation
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
}
