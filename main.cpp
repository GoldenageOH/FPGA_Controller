#include "control.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    std::endl
        << "This application is working." << std::endl;
    QApplication a(argc, argv);
    control w;
    w.show();

    return a.exec();
}
