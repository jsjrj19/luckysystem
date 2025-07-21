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

DEFINES += QT_DEPRECATED_WARNINGS
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


# 清理重复的源文件并添加缺失的反斜杠
SOURCES += \
    main.cpp \
    widget.cpp \
    personlistmanager.cpp \
    rafflemode.cpp \
    singlemode.cpp \
    mutiplemode.cpp \
    nameinterface.cpp \
    namesetting.cpp \
    participantinterface.cpp \
    person.cpp \
    raffleinterface.cpp \
    raffleresult.cpp \
    rafflesetting.cpp \
    startinterface.cpp

# 清理重复的头文件并添加缺失的反斜杠
HEADERS += \
    widget.h \
    personlistmanager.h \
    config.h \
    rafflemode.h \
    singlemode.h \
    multiplemode.h \
    nameinterface.h \
    namesetting.h \
    participantinterface.h \
    person.h \
    raffleinterface.h \
    raffleresult.h \
    rafflesetting.h \
    startinterface.h

# 添加缺失的反斜杠
FORMS += \
    widget.ui \
    nameinterface.ui \
    namesetting.ui \
    participantinterface.ui \
    raffleinterface.ui \
    raffleresult.ui \
    rafflesetting.ui \
    startinterface.ui

# 移除循环依赖
#SUBDIRS += LuckySystem.pro

# 清理DISTFILES
DISTFILES += \
    README.md
