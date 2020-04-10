#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    int value;
    while(true)
    {
        value=w.spinbox_value();
        w.lcdNumber_setChange(value);


    }
    return a.exec();
}
