#ifndef RAFFLEINTERFACE_H
#define RAFFLEINTERFACE_H

#include <QWidget>
#include<QLabel>
#include<QTimer>
#include <QPropertyAnimation>
#include<QPushButton>


namespace Ui {
class Raffleinterface;
}

class Raffleinterface : public QWidget
{
    Q_OBJECT

public:
    explicit Raffleinterface(QWidget *parent = 0);
    ~Raffleinterface();

private:
    Ui::Raffleinterface *ui;
    QLabel *raffleLabel;
    QPushButton *startbtn;
    QPushButton *participantbtn;
    QPushButton *setbtn;
    QPushButton *resultbtn;
    QStringList names;  //抽奖名字
    QPropertyAnimation *animation;
};

#endif // RAFFLEINTERFACE_H
