/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Jul 9 16:55:51 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUpdate;
    QAction *actionUpdate_2;
    QAction *actionQuit;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *transX;
    QLineEdit *transY;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *transZ;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    GLWidget *glwidget;
    QLabel *label_6;
    QMenuBar *menuBar;
    QMenu *menuMen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(844, 592);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(353, 171));
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QString::fromUtf8("actionUpdate"));
        actionUpdate_2 = new QAction(MainWindow);
        actionUpdate_2->setObjectName(QString::fromUtf8("actionUpdate_2"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(680, 41, 151, 421));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 91, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 161, 67, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 295, 67, 17));
        transX = new QLineEdit(groupBox);
        transX->setObjectName(QString::fromUtf8("transX"));
        transX->setGeometry(QRect(30, 50, 113, 27));
        transY = new QLineEdit(groupBox);
        transY->setObjectName(QString::fromUtf8("transY"));
        transY->setGeometry(QRect(30, 80, 113, 27));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 181, 113, 27));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(30, 211, 113, 27));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(30, 315, 113, 27));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(30, 345, 113, 27));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(19, 54, 20, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(19, 185, 16, 17));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(19, 319, 16, 17));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(19, 350, 16, 17));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(19, 217, 16, 17));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(19, 84, 16, 17));
        transZ = new QLineEdit(groupBox);
        transZ->setObjectName(QString::fromUtf8("transZ"));
        transZ->setGeometry(QRect(30, 110, 113, 27));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(30, 241, 113, 27));
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(31, 375, 113, 27));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(19, 247, 16, 17));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 380, 16, 17));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 114, 16, 17));
        glwidget = new GLWidget(centralWidget);
        glwidget->setObjectName(QString::fromUtf8("glwidget"));
        glwidget->setGeometry(QRect(20, 40, 651, 481));
        sizePolicy.setHeightForWidth(glwidget->sizePolicy().hasHeightForWidth());
        glwidget->setSizePolicy(sizePolicy);
        glwidget->setMinimumSize(QSize(0, 0));
        glwidget->setCursor(QCursor(Qt::CrossCursor));
        glwidget->setFocusPolicy(Qt::StrongFocus);
        glwidget->setAutoFillBackground(false);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 20, 101, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 844, 23));
        menuMen = new QMenu(menuBar);
        menuMen->setObjectName(QString::fromUtf8("menuMen"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMen->menuAction());
        menuMen->addAction(actionUpdate_2);
        menuMen->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(activated()), MainWindow, SLOT(close()));
        QObject::connect(transX, SIGNAL(textChanged(QString)), MainWindow, SLOT(translate()));
        QObject::connect(transY, SIGNAL(textChanged(QString)), glwidget, SLOT(translate()));
        QObject::connect(transZ, SIGNAL(textChanged(QString)), glwidget, SLOT(translate()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionUpdate->setText(QApplication::translate("MainWindow", "Update", 0, QApplication::UnicodeUTF8));
        actionUpdate_2->setText(QApplication::translate("MainWindow", "Update", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Transformations", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Translation:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Rotation:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Scale:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Render View", 0, QApplication::UnicodeUTF8));
        menuMen->setTitle(QApplication::translate("MainWindow", "Men\303\274", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
