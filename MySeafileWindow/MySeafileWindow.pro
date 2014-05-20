#-------------------------------------------------
#
# Project created by QtCreator 2014-04-30T10:48:59
#
#-------------------------------------------------

QT       += core gui
QT += designer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MySeafileWindow
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    headerview.cpp \
    menuview.cpp \
    rightdockview.cpp \
    bodyview.cpp \
    flodsview.cpp \
    itemmodel.cpp \
    itemobject.cpp \
    mylistitemdelegege.cpp \
    mylineitemdelegate.cpp \
    leftdockview.cpp

HEADERS  += mainwindow.h \
    headerview.h \
    menuview.h \
    rightdockview.h \
    bodyview.h \
    flodsview.h \
    itemmodel.h \
    itemobject.h \
    mylistitemdelegege.h \
    mylineitemdelegate.h \
    leftdockview.h

FORMS    += mainwindow.ui \
    headerview.ui \
    menuview.ui \
    rightdockview.ui \
    bodyview.ui \
    flodsview.ui \
    leftdockview.ui

RESOURCES += \
    Resource.qrc

OTHER_FILES += \
    myucplugin.js
