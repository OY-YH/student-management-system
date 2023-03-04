#include "mainwindow.h"
//#include "page_login.h"
#include <QApplication>
#include "stusql.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.show(); //不在主界面显示
    stusql sql;
    return a.exec();
}
