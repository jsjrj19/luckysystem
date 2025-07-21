#ifndef NAMEINTERFACE_H
#define NAMEINTERFACE_H

#include <QWidget>
#include<QFileDialog>

namespace Ui {
class NameInterface;
}

class NameInterface : public QWidget
{
    Q_OBJECT

public:
    explicit NameInterface(QWidget *parent = 0);
    ~NameInterface();
    void mousePressEvent(QMouseEvent *e);
    void slideShow();

private:
    Ui::NameInterface *ui;
};

#endif // NAMEINTERFACE_H
