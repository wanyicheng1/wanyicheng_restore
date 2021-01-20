#include "mainwindow.h"
#include "UI.h"
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow) //init
{
    ui->setupUi(this);
    this->ui->ipds_label->setText(this->db_ip);
    //connect(this->ui->aboutsoftware,&QAction::triggered,this,this->OpenAboutSoftWare);  //关于软件
    //connect(this->ui->aboutdb,&QAction::triggered,this,this->OpenAboutDb);              //关于数据库
    //connect(this->ui->aboutAuthor,&QAction::triggered,this,this->OpenAboutAuthor);      //关于作者
    //connect(this->ui->setdb,&QAction::triggered,this,this->setDataBase); //设置数据库

    this->db_ip = this->ui->ip_lineEdit->text();//从IP_LINEEDIT 中获取ip
    this->db_Username = this->ui->account_lineEdit_2->text();//从LINEEDIT中获取USERNAME
    this->db_Password = this->ui->password_lineEdit_2->text();//从LINEEDIT中获取PASSWORD
    /*数据库相关*/
    this->ui->ipds_label->setText(this->db_ip);
    this->db.setHostName(this->db_ip);
    this->db.setDatabaseName(this->db_Databasename);
    this->db.setUserName(this->db_Username);
    this->db.setPassword(this->db_Password);
    //对数据库连接情况进行判断
    if(!(this->db.open()))
    {
        QMessageBox::warning(nullptr,"错误!",db.lastError().text());
        this->ui->stackedWidget->setCurrentIndex(1); //切换界面至设置数据库界面
    }
    else
    {
        QMessageBox::about(nullptr,"连接成功！","数据库已经成功连接！");//显示连接成功
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OpenAboutSoftWare()//打开关于本程序
{
    QMessageBox::about(nullptr,"关于本软件","<strong><span>本程序是一个对校园进行管理的简易系统</span></strong></p><p><span>本程序使用Qt框架结合C++语言进行设计，结合MySQL搭建数据库。本程序仅供实验使用。</span></p>");
}

void MainWindow::OpenAboutDb()//关于数据库
{
    QMessageBox::about(nullptr,"关于数据库","<p><strong><span>本软件服务器搭建于Raspberry pi 3b+（Linux）系统，数据库使用MySQL</span></strong></p><p><span>默认IP地址：127.0.0.1 （localhost）</span></p><p><span>默认用户名：root</span></p><p><span>默认密码：123123</span></p>");
}

void MainWindow::OpenAboutAuthor()//关于作者
{
    QMessageBox::about(nullptr,"关于作者","<p><span>辽宁科技大学</span><span>	</span><span>PureAngel</span><span>");
}
void MainWindow::setDataBase() //切换界面
{
    //SetDataBase*ptr_db = new SetDataBase(this->db);
    //ptr_db->show();
    this->ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_exit_pushButton_clicked() // 退出程序
{
    this->close();
}

void MainWindow::on_login_pushButton_clicked()//登录
{
    QSqlQuery query;
    query.exec(this->cmd);//录入SQL

    if(query.first()) //登录成功
    {
        QMessageBox::information(nullptr,"登录成功","欢迎登录！",QMessageBox::Yes);//显示成功

        //switch (this->flag)
        //{
        //case 1:
        //    this->ui->stackedWidget->setCurrentIndex(2);

        //    break;
       // case 2:
        //    this->ui->stackedWidget->setCurrentIndex(3);
        //    break;
       // case 3:
        //    this->ui->stackedWidget->setCurrentIndex(4);
        //    break;
        //default:
         //   break;
       // }
        if(this->flag == 1) //admin界面
        {
            this->ui->stackedWidget->setCurrentIndex(2);//切换至admin界面
            /*管理员的数据库显示*/
            this->admin_model = new QSqlTableModel(this);
            this->admin_model->setTable("admin"); //选择数据库
            this->ui->admin_tableView->setModel(this->admin_model); //显示出相应内容
            this->admin_model->select();//全部显示
            /*学生的数据库显示*/
            this->student_model = new QSqlTableModel(this);
            this->student_model->setTable("student");
            this->ui->student_tableView->setModel(this->student_model);
            this->student_model->select();
            /*教师*/
            this->teacher_model = new QSqlTableModel(this);
            this->teacher_model->setTable("teacher");
            this->ui->teacher_tableView->setModel(this->teacher_model);
            this->teacher_model->select();
            /*设置数据库显示相关*/
            this->admin_model->setHeaderData(0,Qt::Horizontal,"账号");
            this->admin_model->setHeaderData(1,Qt::Horizontal,"密码");
            this->student_model->setHeaderData(0,Qt::Horizontal,"账号");
            this->student_model->setHeaderData(1,Qt::Horizontal,"密码");
            this->teacher_model->setHeaderData(0,Qt::Horizontal,"账号");
            this->teacher_model->setHeaderData(1,Qt::Horizontal,"密码");
            /*设置手动提交，防止误操作*/
            this->admin_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
            this->student_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
            this->teacher_model->setEditStrategy(QSqlTableModel::OnManualSubmit);

        }
        else
            if(this->flag == 2)
            {
                this->ui->stackedWidget->setCurrentIndex(3);
                this->studentself_model = new QSqlTableModel(this);
                this->studentself_model->setTable("student_score");//选择数据库
                this->ui->student_self_tableView->setModel(this->studentself_model);

                /*显示自身的成绩*/
                QString str = QString("Name = '%1' ").arg(this->ui->account_lineEdit->text());
                this->studentself_model->setFilter(str);
                this->studentself_model->select();

                this->ui->student_self_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//不允许进行编辑、修改
                this->studentself_model->setHeaderData(0,Qt::Horizontal,"姓名");
                this->studentself_model->setHeaderData(1,Qt::Horizontal,"高等数学");
                this->studentself_model->setHeaderData(2,Qt::Horizontal,"大学物理");
                this->studentself_model->setHeaderData(3,Qt::Horizontal,"大学英语");
                this->studentself_model->setHeaderData(4,Qt::Horizontal,"数据结构");
            }
        else
                if(this->flag == 3)
                {
                    this->ui->stackedWidget->setCurrentIndex(4);
                    this->teacherself_model = new QSqlTableModel(this);
                    this->teacherself_model->setTable("student_score");
                    this->ui->teacherself_tableView->setModel(this->teacherself_model);
                    this->teacherself_model->select();
                    this->teacherself_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
                    this->teacherself_model->setHeaderData(0,Qt::Horizontal,"姓名");
                    this->teacherself_model->setHeaderData(1,Qt::Horizontal,"高等数学");
                    this->teacherself_model->setHeaderData(2,Qt::Horizontal,"大学物理");
                    this->teacherself_model->setHeaderData(3,Qt::Horizontal,"大学英语");
                    this->teacherself_model->setHeaderData(4,Qt::Horizontal,"数据结构");
                }

    }
    else
    {
      QMessageBox::warning(nullptr,"Error!","登录失败，请输入正确的账号和密码！");//登录失败、报错
    }
}

void MainWindow::on_return_pushButton_clicked()
{
    this->ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_confirm_pushButton_clicked() //连接数据库相关
{
    this->db_ip = this->ui->ip_lineEdit->text();
    this->db_Username = this->ui->account_lineEdit_2->text();
    this->db_Password = this->ui->password_lineEdit_2->text();

    this->db.setHostName(this->db_ip);
    this->db.setDatabaseName(this->db_Databasename);
    this->db.setUserName(this->db_Username);
    this->db.setPassword(this->db_Password);
    if(!(this->db.open()))
    {
        QMessageBox::warning(nullptr,"错误!",db.lastError().text());
        this->ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QMessageBox::about(nullptr,"连接成功！","数据库已经成功连接！");
        this->ui->ipds_label->setText(this->db_ip);
        this->ui->stackedWidget->setCurrentIndex(0);
    }
}



void MainWindow::on_admin_checkBox_clicked() //选择admin时
{
    this->user_name = this->ui->account_lineEdit->text();
    this->user_password = this->ui->password_lineEdit->text();
    this->cmd = QString("select * from admin where username = '%1' and password = '%2'").arg(this->user_name).arg(this->user_password); //生成SQL
    //qDebug()<<this->cmd<<endl;
    this->ui->show_admin_label->setText(this->user_name);//切换标签
    this->flag = 1;//设置flag
}

void MainWindow::on_student_checkBox_clicked()//选择student时
{
    this->user_name = this->ui->account_lineEdit->text();
    this->user_password = this->ui->password_lineEdit->text();
    this->cmd = QString("select * from student where username = '%1' and password = '%2'").arg(this->user_name).arg(this->user_password);//生成SQL
    qDebug()<<this->cmd<<endl;
    this->ui->show_student_label->setText(this->user_name);//切换标签
    this->flag = 2;//设置flag
    //qDebug()<<this->flag;
}

void MainWindow::on_teacher_checkBox_clicked()//选择教师时
{
    this->user_name = this->ui->account_lineEdit->text();
    this->user_password = this->ui->password_lineEdit->text();
    this->cmd = QString("select * from teacher where username = '%1' and password = '%2'").arg(this->user_name).arg(this->user_password);//生成SQL
    //qDebug()<<this->cmd<<endl;
    this->ui->show_teacher_label->setText(this->user_name);//切换标签
    this->flag = 3;//设置flag
}

void MainWindow::on_add_pushButton_clicked() //添加空行
{
    QSqlRecord record = this->teacher_model->record();
    int row = this->teacher_model->rowCount();//获取行数
    this->teacher_model->insertRecord(row,record);//插入
}

void MainWindow::on_save_pushButton_clicked()
{
    this->teacher_model->submitAll();//点击保存后提交SQL
}

void MainWindow::on_cancel_pushButton_clicked()
{
    this->teacher_model->revertAll();
    this->teacher_model->submitAll();
}

void MainWindow::on_delete_pushButton_clicked()
{
    QItemSelectionModel* select = this->ui->teacher_tableView->selectionModel();
    QModelIndexList list = select->selectedRows();
    for(int i = 0 ; i < list.size() ; i++ )
    {
        this->teacher_model->removeRow(list.at(i).row());
    }
}

void MainWindow::on_search_pushButton_clicked()
{
    QString name = this->ui->search_lineEdit->text();
    if(!(name == '#'))
    {
    QString str = QString("username = '%1' ").arg(name);
    this->teacher_model->setFilter(str);
    this->teacher_model->select();
    }
    else
    {
     this->teacher_model->select();
    }
}

void MainWindow::on_add_pushButton_2_clicked()
{
    QSqlRecord record = this->admin_model->record();
    int row = this->admin_model->rowCount();
    this->admin_model->insertRecord(row,record);
}

void MainWindow::on_save_pushButton_2_clicked()
{
    this->admin_model->submitAll();
}

void MainWindow::on_cancel_pushButton_2_clicked()
{
    this->admin_model->revertAll();
    this->admin_model->submitAll();
}

void MainWindow::on_delete_pushButton_2_clicked()
{
    QItemSelectionModel* select = this->ui->admin_tableView->selectionModel();
    QModelIndexList list = select->selectedRows();
    for(int i = 0 ; i < list.size() ; i++ )
    {
        this->admin_model->removeRow(list.at(i).row());
    }
}


void MainWindow::on_search_pushButton_2_clicked()
{
    QString name = this->ui->search_lineEdit_2->text();
    if(!(name == '#'))
    {
    QString str = QString("username = '%1' ").arg(name);
    this->admin_model->setFilter(str);
    this->admin_model->select();
    }
    else
    {
     this->admin_model->select();
    }
}

void MainWindow::on_add_pushButton_3_clicked()
{
    QSqlRecord record = this->student_model->record();
    int row = this->student_model->rowCount();
    this->student_model->insertRecord(row,record);
}

void MainWindow::on_save_pushButton_3_clicked()
{
     this->student_model->submitAll();
}

void MainWindow::on_cancel_pushButton_3_clicked()
{
    this->admin_model->revertAll();
    this->admin_model->submitAll();
}

void MainWindow::on_delete_pushButton_3_clicked()
{
    QItemSelectionModel* select = this->ui->student_tableView->selectionModel();
    QModelIndexList list = select->selectedRows();
    for(int i = 0 ; i < list.size() ; i++ )
    {
        this->student_model->removeRow(list.at(i).row());
    }
}

void MainWindow::on_search_pushButton_3_clicked()
{
    QString name = this->ui->search_lineEdit_3->text();
    if(!(name == '#'))
    {
    QString str = QString("username = '%1' ").arg(name);
    this->student_model->setFilter(str);
    this->student_model->select();
    }
    else
    {
     this->student_model->select();
    }
}

void MainWindow::on_add_pushButton_4_clicked()
{
    QSqlRecord record = this->teacherself_model->record();
    int row = this->teacherself_model->rowCount();
    this->teacherself_model->insertRecord(row,record);
}

void MainWindow::on_save_pushButton_4_clicked()
{
    this->teacherself_model->submitAll();
}

void MainWindow::on_cancel_pushButton_4_clicked()
{
    this->teacherself_model->revertAll();
    this->teacherself_model->submitAll();
}

void MainWindow::on_delete_pushButton_4_clicked()
{
    QItemSelectionModel* select = this->ui->teacherself_tableView->selectionModel();
    QModelIndexList list = select->selectedRows();
    for(int i = 0 ; i < list.size() ; i++ )
    {
        this->teacherself_model->removeRow(list.at(i).row());
    }
}

void MainWindow::on_search_pushButton_4_clicked()
{
    QString name = this->ui->search_lineEdit_4->text();
    if(!(name == '#'))
    {
    QString str = QString("Name = '%1' ").arg(name);
    this->teacherself_model->setFilter(str);
    this->teacherself_model->select();
    }
    else
    {
     this->teacherself_model->select();
    }
}


