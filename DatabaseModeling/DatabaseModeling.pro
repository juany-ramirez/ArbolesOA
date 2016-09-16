#-------------------------------------------------
#
# Project created by QtCreator 2016-09-15T16:20:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DatabaseModeling
TEMPLATE = app


SOURCES += main.cpp\
        database.cpp \
    node_avl.cpp \
    openfiledialog.cpp

HEADERS  += database.h \
    node_avl.h \
    openfiledialog.h

FORMS    += database.ui

RESOURCES += \
    pics.qrc
