#include "rafflesetting.h"
#include "ui_rafflesetting.h"

RaffleSetting::RaffleSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RaffleSetting)
{
    ui->setupUi(this);
}

RaffleSetting::~RaffleSetting()
{
    delete ui;
}
