#ifndef STARTINTERFACE_H
#define STARTINTERFACE_H

#include <QWidget>
#include<QLabel>
#include<QPushButton>

namespace Ui {
class Startinterface;
}

class Startinterface : public QWidget
{
    Q_OBJECT

public:
    explicit Startinterface(QWidget *parent = 0);
    ~Startinterface();

private:
    Ui::Startinterface *ui;
    QLabel *startLabel;
    QPushButton *starbtn1;
    QPushButton *starbtn2;
};

#endif // STARTINTERFACE_H
