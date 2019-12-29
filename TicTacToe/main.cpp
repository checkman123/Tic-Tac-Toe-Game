#include "maingamewindow.h"
#include <QApplication>
#include "gamemodel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainGameWindow w;
    w.show();

    return a.exec();
}
