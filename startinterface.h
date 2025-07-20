#ifndef STARTINTERFACE_H
#define STARTINTERFACE_H

#include <QWidget>

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
};

#endif // STARTINTERFACE_H
