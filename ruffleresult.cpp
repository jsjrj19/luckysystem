#include "ruffleresult.h"
#include "ui_ruffleresult.h"

RuffleResult::RuffleResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RuffleResult)
{
    ui->setupUi(this);
}

RuffleResult::~RuffleResult()
{
    delete ui;
}
