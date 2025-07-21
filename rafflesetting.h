#ifndef RAFFLESETTING_H
#define RAFFLESETTING_H

#include <QWidget>

namespace Ui {
class RaffleSetting;
}

class RaffleSetting : public QWidget
{
    Q_OBJECT

public:
    explicit RaffleSetting(QWidget *parent = 0);
    ~RaffleSetting();

private:
    Ui::RaffleSetting *ui;
};

#endif // RAFFLESETTING_H
