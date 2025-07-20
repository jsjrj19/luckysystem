#ifndef SINGLEMODE_H
#define SINGLEMODE_H
#include"rafflemode.h"
#include <QTime>
#include <cstdlib>
#include<iostream>
using namespace std;

class SingleMode : public RaffleMode
{
public:
    SingleMode();
    void setStrategy(RaffleStrategy rs);
    void algorithm();

public:
    int chosenId;
    QString chosenName;

};

#endif // SINGLEMODE_H
