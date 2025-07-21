#ifndef PARTICIPANTINTERFACE_H
#define PARTICIPANTINTERFACE_H

#include <QWidget>

namespace Ui {
class ParticipantInterface;
}

class ParticipantInterface : public QWidget
{
    Q_OBJECT

public:
    explicit ParticipantInterface(QWidget *parent = 0);
    ~ParticipantInterface();

private:
    Ui::ParticipantInterface *ui;
};

#endif // PARTICIPANTINTERFACE_H
