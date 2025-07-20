#include "multiplemode.h"

MultipleMode::MultipleMode()
{
    getPrizeCounts = null;
    chosenId[getPrizeCounts] = null;
    chosenName[getPrizeCounts] = null;
    raffleStrategy = null;
}

void MultipleMode::setStrategy(RaffleStrategy rs){
    this->raffleStrategy = rs;
}

void MultipleMode::algorithm(){
    switch(raffleStrategy){
    case repeatStrategy:
        qsrand(static_cast<uint>(QTime::currentTime().msec()));
        for(int i = 0;i<getPrizeCounts;i++){
            chosenId[i] = qrand%personList.count;//生成0-参与人数个数的随机数即参与者ID
            chosenName[i] = personList.at(chosenId).name;//获取中奖人姓名
                                                        //存入中奖名单

        }
        break;

    case unrepeatStrategy:
        QList<QPair<int,QString>> tempList;
        for (int i = 0; i < personList.count; ++i){
                tempList.append(qMakePair(i, personList.at(i).name));
        }
        for(int i = personList.count;i>=0;i--){
            int j = qrand%(i+1);
            std::swap(tempList[i],tempList[j]);
        }
        for(int i = 0;i<getPrizeCounts;i++){
            chosenName[i] = tempList[i].at(chosenId).name;
                                                          //存入中奖名单
        }
        break;

        /*
        for(int i = 0;i<getPrizeCounts;i++){
            chosenId[i] = qrand%personList.count;//生成0-参与人数个数的随机数即参与者ID
            if(personList.at(chosenId).getPrize){
                i--;
                continue;
            }
            chosenName[i] = personList.at(chosenId).name;//获取中奖人姓名
                                                        //存入中奖名单
            personList.at(chosenId).getPrize = true;
        }
        break;
        */
    case weightStrategy:
        int w = 0;
        for(int j = 0;j<getPrizeCounts;j++){
            for(int i = 0; i<personList.count;i++){
                w+=personList.at(i).weight;
            }
            int r = qrand%w;
            for(int i = 0; i<personList.count;i++){
                w-=personList.at(i).weight;
                if(w<=0){
                    chosenId = i;
                    chosenName = personList.at(i).name;
                                                        //存入中奖名单
                    w = 0;
                    break;
                }
            }
        }
        break;
    case groupStrategy:
        QList<QPair<int,QString>> tempList;
        for (int i = 0; i < personList.count; ++i){
                tempList.append(qMakePair(i, chooseGroupList.at(i).name));
        }
        for(int i = chooseGroupList.count;i>=0;i--){
            int j = qrand%(i+1);
            std::swap(tempList[i],tempList[j]);
        }
        for(int i = 0;i<getPrizeCounts;i++){
            chosenName[i] = tempList[i].at(chosenId).name;
                                                          //存入中奖名单
        }
        break;

    }
}
