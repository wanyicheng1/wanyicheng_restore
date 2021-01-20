#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include<QMessageBox>
#include<QSqlDatabase>
#include<QDebug>
#include<QSqlError>

#include"QSqlQuery"
#include<QStackedWidget>
#include<QSqlTableModel>
#include<QTableWidget>
#include<QSqlRecord>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui; //UI
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL"); //设置数据库
    QString db_ip; //数据库IP
    QString db_Databasename = "classinformation";//数据库名称
    QString db_Username;//USER_NAME
    QString db_Password;//PASSWORD
    QString user_name;
    QString user_password;
    QString cmd;//SQL语句
    int flag = 0;//控制多选项
    QSqlTableModel* admin_model;//相应的modele
    QSqlTableModel* student_model;
    QSqlTableModel* teacher_model;
    QSqlTableModel* studentself_model;
    QSqlTableModel* teacherself_model;
private slots:
    void OpenAboutSoftWare(); //菜单关于本程序按钮
    void OpenAboutDb();//打开关于数据库
    void OpenAboutAuthor();//关于作者
    void setDataBase();//设置数据库
    void on_exit_pushButton_clicked();//退出按钮
    void on_login_pushButton_clicked();//登录
    void on_return_pushButton_clicked();//确认
    void on_confirm_pushButton_clicked();

    void on_admin_checkBox_clicked();//admin选项
    void on_student_checkBox_clicked();//student选项
    void on_teacher_checkBox_clicked();//teacher选项
    /*下方是相应界面的操作代码*/
    void on_add_pushButton_clicked();
    void on_save_pushButton_clicked();
    void on_cancel_pushButton_clicked();
    void on_delete_pushButton_clicked();
    void on_search_pushButton_clicked();
    void on_add_pushButton_2_clicked();
    void on_save_pushButton_2_clicked();
    void on_cancel_pushButton_2_clicked();
    void on_delete_pushButton_2_clicked();
    void on_search_pushButton_2_clicked();
    void on_add_pushButton_3_clicked();
    void on_save_pushButton_3_clicked();
    void on_cancel_pushButton_3_clicked();
    void on_delete_pushButton_3_clicked();
    void on_search_pushButton_3_clicked();
    void on_add_pushButton_4_clicked();
    void on_save_pushButton_4_clicked();
    void on_cancel_pushButton_4_clicked();
    void on_delete_pushButton_4_clicked();
    void on_search_pushButton_4_clicked();
};
#endif // MAINWINDOW_H
