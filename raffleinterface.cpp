#include "raffleinterface.h"
#include "ui_raffleinterface.h"
#include<QTimer>
#include <QPropertyAnimation>

Raffleinterface::Raffleinterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Raffleinterface)
{
    ui->setupUi(this);

    raffleLabel = ui->label;
    startbtn = ui->startButton;
    participantbtn = ui->participantButton;
    setbtn = ui->setButton;
    resultbtn = ui->resultButton;


    // ---------- 关键：设置部件的大小策略 ----------
    // 示例：让 label、按钮等随窗口等比例缩放
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // 单独设置 label 的大小策略（让其随窗口缩放）
    raffleLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // 按钮同理（若需要按钮也缩放，可设置 Expanding；若仅适配位置，用 Preferred ）
    startbtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    participantbtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    setbtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    resultbtn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    // ... 其他按钮

    // ---------- （可选）动画逻辑保持不变 ----------

}

Raffleinterface::~Raffleinterface()
{
    delete ui;
}
