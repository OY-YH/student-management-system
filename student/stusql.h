#ifndef STUSQL_H
#define STUSQL_H

#include <QObject>
#include <QSqlDatabase>

struct studentInfo{
    int id;
    QString name;
    quint8 age;     //qt unsigned char
    quint16 grade;  //short int
    quint16 stu_class;
    quint32 studentid;  //int
    QString phone;
    QString wechat;

};

struct userInfo{
    QString username;
    QString password;
    QString aut;
};

class stusql : public QObject
{
    Q_OBJECT
public:
    //创建单例对象
    static stusql *ptrstuSql;       //类内静态指针，类外初始化
    static stusql *getinstance(){   //返回单例
        if(nullptr==ptrstuSql){     //把常量放左边，方便检测，编码规范要求
            ptrstuSql=new stusql;
        }
        return ptrstuSql;
    }
    explicit stusql(QObject *parent = nullptr);


    //打开数据库
    void init();

    //查询所有学生数量 
    quint32 getSum();

    //获取单个学生数据
    studentInfo getSingleData(int index);

    //查询第几页学生数据 page为页数，page_count为一页的学生数
    QList<studentInfo> getPageData(quint32 page,quint32 page_count);

    //增加学生
    bool addStu(studentInfo);

    //删除学生
    bool delStu(quint32 id);

    //修改学生信息
    bool updateStuInfo(studentInfo info);

    //清空学生表
    bool clearStuTable();

    //查询所有用户
    QList<userInfo> getAllUser();

    //查询用户名是否存在
    bool user_isExit(QString username);

    //添加用户
    bool addUser(userInfo info);

    //修改用户信息
    bool updateUser(userInfo info);

    //删除用户
    bool delUser(QString username);

private:
    QSqlDatabase m_db;
signals:

};

#endif // STUSQL_H
