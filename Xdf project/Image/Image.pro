QT += widgets
QT += core
QT -= gui

CONFIG += c++11

TARGET = Image
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    image.h
