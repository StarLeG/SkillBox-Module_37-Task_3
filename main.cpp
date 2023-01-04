#include "tv_remote.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TV_Remote w;
    w.show();
    return a.exec();
}
