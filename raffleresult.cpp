#include "raffleresult.h"
#include "ui_ruffleresult.h"

RaffleResult::RaffleResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RaffleResult)
{
    ui->setupUi(this);
}

RaffleResult::~RaffleResult()
{
    delete ui;
}
