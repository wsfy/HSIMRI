#-------------------------------------------------
#
# Project created by QtCreator 2017-03-17T21:56:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HSIMRI
TEMPLATE = app


SOURCES += main.cpp\
        hdiff_mainwindow.cpp \
    process_property_form.cpp \
    h_viewer.cpp

HEADERS  += hdiff_mainwindow.h \
    process_property_form.h \
    h_viewer.h

FORMS    += hdiff_mainwindow.ui \
    process_property_form.ui \
    h_viewer.ui

RESOURCES += \
    imgrc.qrc

DISTFILES +=
