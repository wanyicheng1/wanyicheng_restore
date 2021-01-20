#include<iostream>
#include <QCoreApplication>

#include <QSqlDatabase>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
    qDebug()<<"Avaliable drivers;";
    QStringList drivers = QSqlDatabase::drivers();
    foreach(QString driver,drivers)
        qDebug()<<driver;
    */
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("classinformation");
    db.setUserName("root");
    db.setPassword("121457wyc");
    if(!db.open())
    {
        qDebug()<<"不能连接"<<"connect to mysql error";
        return 0;
    }
    else
    {
        qDebug()<<"连接成功"<<"connect to mysql OK";
    }

    return a.exec();
}
