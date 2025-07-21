#-------------------------------------------------
#
# Project created by QtCreator 2025-07-19T15:00:00
#
#-------------------------------------------------

QT       += core gui
QT += axcontainer  # 启用ActiveX支持

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LuckySystem
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    personlistmanager.cpp \
    rafflemode.cpp \
    singlemode.cpp \
    mutiplemode.cpp \
<<<<<<< HEAD
    nameinterface.cpp
=======
    person.cpp \
    startinterface.cpp \
    namesetting.cpp \
    participantinterface.cpp \
    raffleinterface.cpp \
    rafflesetting.cpp \
    raffleresult.cpp
>>>>>>> 5971b15 (前端和文件读取部分)

HEADERS += \
        widget.h \
    personlistmanager.h \
    config.h \
    rafflemode.h \
    singlemode.h \
    multiplemode.h \
<<<<<<< HEAD
    nameinterface.h

FORMS += \
        widget.ui \
    nameinterface.ui
=======
    person.h \
    startinterface.h \
    namesetting.h \
    raffleinterface.h \
    rafflesetting.h \
    participantinterface.h \
    raffleresult.h

FORMS += \
        widget.ui \
    startinterface.ui \
    participantinterface.ui \
    raffleinterface.ui \
    rafflesetting.ui \
    namesetting.ui \
    raffleresult.ui
>>>>>>> 5971b15 (前端和文件读取部分)
