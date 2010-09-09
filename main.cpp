#include <QtGui/QApplication>
#include "mainwindow.h"
#include "numeric.h"
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.show();

//    long a = 8;
//    long b = 4;
//    Numeric c (a,b);
//    qDebug() << c.getPx();
//    return 0;
    return app.exec();
}
