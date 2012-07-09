#-------------------------------------------------
#
# Project created by QtCreator 2012-06-20T13:14:07
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = GLTest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glwidget.cpp \
    objloader.cpp

HEADERS  += mainwindow.h \
    glwidget.h \
    objloader.h

FORMS    += mainwindow.ui

RESOURCES += \
    glslResources.qrc

OTHER_FILES += \
    program.vert \
    program.frag
