TEMPLATE = app
TARGET = Test

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES +=  main.cpp \
    auto.cpp

HEADERS += \
    auto.h
