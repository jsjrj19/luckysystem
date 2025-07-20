#include "participantinterface.h"
#include "ui_participantinterface.h"

ParticipantInterface::ParticipantInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParticipantInterface)
{
    ui->setupUi(this);
}

ParticipantInterface::~ParticipantInterface()
{
    delete ui;
}
