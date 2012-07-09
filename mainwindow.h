#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

/**
 * Diese Klasse kontrolliert die View der Applikation. Zudem empfängt sie die
 * Benutzereingaben der Oberfläche und leitet diese an eine Klasse zur Verarbeitung
 * weiter.
 *
 * @author François Dubois <siokdub@gmail.com>
 * @author Sebastian Morkisch <semox78@gmail.com>
 *
 *@brief The MainWindow class
 */

class MainWindow : public QMainWindow {
  Q_OBJECT

public:

  /**
   * Ermöglicht nur den einmaligen Aufruf zur Laufzeit des Programms
   * ohne Kinderfenster zu erlauben.
   */
  explicit MainWindow(QWidget *parent = 0);

  /**
   * Destruktor der UI
   */
  ~MainWindow();

  /**
   * Empfängt Skalierungsinformationen der UI und leitet Sie weiter, um das GLWidget an
   * die veränderten Verhältnisse anzupassen.
   *
   *@brief resizeEvent
   * @param event
   */
  void resizeEvent(QResizeEvent * event);

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
