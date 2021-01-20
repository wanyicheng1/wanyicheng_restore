#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
#include<QSqlDatabase>
bool opendatabase();
int main(int argc, char *argv[])
{
    opendatabase();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
bool opendatabase()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("classinformation");
    db.setUserName("root");
    db.setPassword("121457wyc");
    if(db.open())
    {
        qDebug()<<"open success";
        return true;
    }
    else
    {
        qDebug()<<"open failed";
        return false;
    }
}
