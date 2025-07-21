#include "startinterface.h"
#include "ui_startinterface.h"

Startinterface::Startinterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Startinterface)
{
    ui->setupUi(this);


}

Startinterface::~Startinterface()
{
    delete ui;
}
