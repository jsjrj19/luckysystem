#include "namesetting.h"
#include "ui_namesetting.h"

NameSetting::NameSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NameSetting)
{
    ui->setupUi(this);
}

NameSetting::~NameSetting()
{
    delete ui;
}
