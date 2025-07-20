#ifndef RUFFLERESULT_H
#define RUFFLERESULT_H

#include <QWidget>

namespace Ui {
class RuffleResult;
}

class RuffleResult : public QWidget
{
    Q_OBJECT

public:
    explicit RuffleResult(QWidget *parent = 0);
    ~RuffleResult();

private:
    Ui::RuffleResult *ui;
};

#endif // RUFFLERESULT_H
