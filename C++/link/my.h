#pragma once  //这是一个比较常用的C/C++杂注，只要在头文件中的最开始加入这条杂注，就能保证头文件只被编译一次.
#include<string>
#include"mysql.h"
class MySql
{
public:
    //构造函数用来初始化mysql和连接数据库
    MySql(const std::string iP,const std::string name,const std::string passwd,const std::string database);
    //析构函数用来做数据库的善后处理
    ~MySql();
    //对数据库进行sql操作
    bool operate(const std::string &operation);
//获取行
    MYSQL_ROW getRow(void);
//获取列数
    int   getColNum(void);   //得到每行的列数.
    void  freeResult(void);  //
    void  print_result(void);  //打印查询结果
    bool InsertData(const std::string &operation);     //插入数据
    bool ModifyData(const std::string &operation);    //修改数据
    bool DeleteData(const std::string &operation);   //删除数据
//释放保存在该连接的操作
private:
    std::string server_ip;    //数据库地址
    std::string user_name;    //用户名
    std::string password;     //用户密码
    std::string database_name; //数据库名
private:
    MYSQL        *mysql_conn;
    MYSQL_RES    *mysql_res;
    MYSQL_ROW    mysql_row;
};
