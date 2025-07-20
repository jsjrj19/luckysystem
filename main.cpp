#include "widget.h"
#include <QApplication>
#include"nameinterface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();

    NameInterface nameInterface;
    nameInterface.show();

    return a.exec();
}
