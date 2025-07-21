#ifndef NAMESETTING_H
#define NAMESETTING_H

#include <QWidget>

namespace Ui {
class NameSetting;
}

class NameSetting : public QWidget
{
    Q_OBJECT

public:
    explicit NameSetting(QWidget *parent = 0);
    ~NameSetting();

private:
    Ui::NameSetting *ui;
};

#endif // NAMESETTING_H
