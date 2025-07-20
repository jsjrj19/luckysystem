#ifndef MUTIPLEMODE_H
#define MUTIPLEMODE_H
#include"rafflemode.h"
#include <QTime>
#include <cstdlib>

class MultipleMode : public RaffleMode
{
public:
    MultipleMode();
    void SetGetPrizeCount(int getPrizeCounts);//设置获奖人数
    void setStrategy(RaffleStrategy rs);
    void algorithm();


public:
    int getPrizeCounts;//获奖人数
    int chosenId[getPrizeCounts];
    String chosenName[getPrizeCounts];

};

#endif // MULTIPLEMODE_H
