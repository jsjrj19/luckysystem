#ifndef RAFFLEMODE_H
#define RAFFLEMODE_H


class RaffleMode
{
public:
    enum RaffleStrategy{
        repeatStrategy,
        unrepeatStrategy,
        weightStrategy,
        groupStrategy,
    };

    RaffleStrategy raffleStrategy;

public:
    RaffleMode();
    virtual void algorithm();
    void setStrategy(RaffleStrategy rs);

};

#endif // RAFFLEMODE_H
