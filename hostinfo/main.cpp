#include "hostinfo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hostinfo *w = new hostinfo();
    w->show();
    return a.exec();
}
