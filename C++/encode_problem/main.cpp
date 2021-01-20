#include<iostream>
#include<string>
#include"mysql.h"
#include"my.h"
#include<stdio.h>
#include <QTextCodec>

using namespace std;
MySql::MySql(const std::string ip,const std::string name,const std::string passwd,const std::string database)
{
    server_ip=ip;
    user_name=name;
    password=passwd;
    database_name=database;

    //初始化mysql
    mysql_conn=mysql_init(NULL);

   //连接mysql
    if(!mysql_real_connect(mysql_conn,server_ip.c_str(),user_name.c_str(),password.c_str(),database_name.c_str(),0,NULL,0)) //后面三个参数分别是port,unix_socket,client_flag.
    {
        std::cout<<"mysql连接失败"<<std::endl;
        exit(1);
    }else{
        cout <<"mysql连接成功"<<endl;
    }
}
//操作函数
bool MySql::operate(const std::string &operation)
{
     if(mysql_query(mysql_conn,operation.c_str()))
    {
        std::cout<<"mysql操作失败"<<std::endl;
        return false;
    }
    //将操作结果存储在结果集
    mysql_res=mysql_use_result(mysql_conn);
    mysql_free_result(mysql_res);
    return true;
}
MYSQL_ROW  MySql::getRow(void)
{
    return mysql_fetch_row(mysql_res);
}
int MySql::getColNum(void)
{
    return mysql_num_fields(mysql_res);
}
void MySql::print_result(void)
{
    //获得每行的字段数
    int num=mysql_num_fields(mysql_res);
    //循环读取所有的行
    while((mysql_row=mysql_fetch_row(mysql_res))!=NULL){
        //将每行字段都读出来.
        for(int i=0;i<num;i++){
            cout << mysql_row[i]<<" ";
        }
        cout << endl;
    }
}
bool MySql::InsertData(const std::string &operation)
{
    if(mysql_query(mysql_conn,operation.c_str())){
        cout << "mysql操作失败!"<<endl;
        exit(1);
    }else{
        cout << "mysql连接成功"<<endl;
    }
    /*mysql_res=mysql_use_result(mysql_conn);
    mysql_free_result(mysql_res);*/
}
bool MySql::ModifyData(const std::string &operation){
    if(mysql_query(mysql_conn,operation.c_str())){
        cout << "mysql操作失败"<<endl;
        exit(1);
    }else{
        cout << "mysql连接成功"<<endl;
    }
}
bool MySql::DeleteData(const std::string &operation){
    if(mysql_query(mysql_conn,operation.c_str())){
        cout <<"mysql操作失败"<<endl;
        exit(1);
    }else{
        cout << "mysql连接成功"<<endl;
    }
}
MySql::~MySql()
{
    //释放存储结果
    mysql_free_result(mysql_res);
    //关闭mysql连接
    mysql_close(mysql_conn);
    cout << "shujulianjiechenggong"<<endl;
}
int main(int argc,char *argv[])
{
    MySql mysql("127.0.0.1","root","121457wyc","classinformation");
    //mysql.operate("select * from orders");
    //mysql.print_result();
//    mysql.InsertData("insert into yang values(NULL,'yang',21)");
    //mysql.ModifyData("update yang set name='feifei' where id=1");
     mysql.DeleteData("delete from yang where id=2");
    return 0;
}
