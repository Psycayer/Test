TEMPLATE = app
TARGET = name_of_the_app

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += main.cpp \
    window.cpp \
    designerwidget.cpp

HEADERS += \
    window.h \
    designerwidget.h

FORMS += \
    designerwidget.ui
