#include "widget.h"
#include <QApplication>
#include"startinterface.h"
#include"raffleinterface.h"
#include<participantinterface.h>
#include<rafflesetting.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // 显示Startinterface对象
    Startinterface w;
    w.show();

    // 显示Raffleinterface界面
    Raffleinterface raffleinterface;
    raffleinterface.show();

    // 显示participantinterface界面
    ParticipantInterface participantInterface;
    participantInterface.show();

    // 显示rafflesetting界面
    RaffleSetting raffleSetting;
    raffleSetting.show();


    return a.exec();
}
