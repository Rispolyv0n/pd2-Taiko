#include "mainwindow.h"
#include <QApplication>

MainWindow *ptrw;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    extern MainWindow *ptrw;
    ptrw = &w;
    w.show();

    return a.exec();
}
