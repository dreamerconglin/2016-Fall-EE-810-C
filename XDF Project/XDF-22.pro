#-------------------------------------------------
#
# Project created by QtCreator 2016-11-08T15:45:06
#
#-------------------------------------------------

QT       += core gui

QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = XDF-2
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    image.cpp \
    pdfview.cpp

HEADERS  += mainwindow.h \
    image.h \
    pdfview.h

FORMS    += mainwindow.ui \
    image.ui \
    pdfview.ui

RESOURCES += \
    myimage.qrc



