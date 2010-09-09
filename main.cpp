#include <QtGui/QApplication>
#include "mainwindow.h"
#include "numeric.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

    return app.exec();
}
