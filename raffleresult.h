#ifndef RUFFLERESULT_H
#define RUFFLERESULT_H

#include <QWidget>

namespace Ui {
class RaffleResult;
}

class RaffleResult : public QWidget
{
    Q_OBJECT

public:
    explicit RaffleResult(QWidget *parent = 0);
    ~RaffleResult();

private:
    Ui::RaffleResult *ui;
};

#endif // RAFFLERESULT_H
