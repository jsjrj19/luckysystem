#include "singlemode.h"


SingleMode::SingleMode()
{

}

void SingleMode::setStrategy(RaffleStrategy rs){
    this->raffleStrategy = rs;
}

void SingleMode::algorithm(){
    switch(raffleStrategy){
    case repeatStrategy:{
        qsrand(static_cast<uint>(QTime::currentTime().msec()));
        chosenId = qrand()%personList.count;//生成0-参与人数个数的随机数即参与者ID
        chosenName = personList.at(chosenId).name;//获取中奖人姓名
                                                    //存入中奖名单
        break;
    }
    case unrepeatStrategy:{
        throw std::invalid_argument("单人模式不支持该抽奖策略！");
        break;
    }
    case weightStrategy:{
        int w = 0;
        for(int i = 0; i<personList.count;i++){
            w+=personList.at(i).weight;
        }
        int r = qrand()%w;
        for(int i = 0; i<personList.count;i++){
            w-=personList.at(i).weight;
            if(w<=0){
                chosenId = i;
                chosenName = personList.at(i).name;
                                                    //存入中奖名单
            }
        }
        break;
    }
    case groupStrategy:{
        chosenId = qrand%chooseGroupList.count;//生成0-参与人数个数的随机数即参与者ID
        chosenName = chooseGroupList.at(chosenId).name;//获取中奖人姓名
                                                    //存入中奖名单
        break;
    }
    }
}
