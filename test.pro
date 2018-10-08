#-------------------------------------------------
#
# Project created by QtCreator 2018-10-08T11:50:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
	dahuaplay.cpp

HEADERS  += mainwindow.h \
    ui_mainwindow.h

FORMS    += mainwindow.ui

LIBS += -lopencv_highgui \
    -lopencv_core  \
    -lopencv_imgproc

LIBS += -L/home/xubuntu/Downloads/qt/test/lib/dahua \
    -ldhnetsdk  \
    -ldhplay

LIBS += -L/home/xubuntu/Downloads/qt/test/lib/arcsoft \
    -larcsoft_fsdk_face_detection \
    -larcsoft_fsdk_face_recognition

