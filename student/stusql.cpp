#include "stusql.h"
#include <QMessageBox>
#include <QCoreApplication>
#include <QSqlQuery>
#include <QDebug>

stusql *stusql::ptrstuSql=nullptr;
stusql::stusql(QObject *parent)
    : QObject{parent}
{
//   init();
//   studentInfo stu;
//   stu.name="aa";
//   for(int i=0;i<10;i++){
//    addStu(stu);
//   }
//   getSum();
//   getPageData(2,3);
//   delStu(13);
//   studentInfo stu;
//   stu.id=6;
//   stu.name="vv";
//   updateStuInfo(stu);
//   userInfo user;
//   user.username="aaaa";
//   user.password="1234";
//   user.aut="admin";

//   addUser(user);

//   auto l=getAllUser();
//   qDebug()<<getAllUser();
//   qDebug()<<user_isExit("aaaa");

//   user.password="8888";
//   updateUser(user);

//    qDebug()<<delUser("aaaa");
}

void stusql::init()
{
    if (QSqlDatabase::drivers().isEmpty()){
        qDebug()<<QSqlDatabase::drivers();
        qDebug()<<"no database drivers found";
    }

    m_db=QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库
//    m_db.setDatabaseName("/root/data.db");
    //设置为当前路径的数据库
#if 1
    //返回该应用程序的输出目录
    auto str_dir=QCoreApplication::applicationDirPath()+"/data.db";
#endif
//    m_db.setDatabaseName("/root/data.db");
    m_db.setDatabaseName(str_dir);      //打包数据库
    if(!m_db.open()){
        qDebug()<<"m_db not open";
    }

//    QSqlQuery q("",m_db);
    //执行sql语句
//    q.exec("INSERT INTO student VALUES (NULL,'张三',12,3,2,1,15912341111,'asszhang')");

}

quint32 stusql::getSum()
{
    QSqlQuery q(m_db);
    q.exec("select count(id) from student");
    quint32 stu_Sum=0;
    while(q.next()){
        stu_Sum=q.value(0).toUInt();
    }
    return stu_Sum;
}

studentInfo stusql::getSingleData(int index)
{
    studentInfo info;
    QSqlQuery q(m_db);
    QString strSql=QString("select * from student limit(%1,%2)").arg(index+1).arg(1);
    q.exec(strSql);
    info.id=q.value(0).toUInt();
    info.name=q.value(1).toString();
    info.age=q.value(2).toUInt();
    info.grade=q.value(3).toUInt();
    info.stu_class=q.value(4).toUInt();
    info.studentid=q.value(5).toUInt();
    info.phone=q.value(6).toString();
    info.wechat=q.value(7).toString();
    return info;

}

QList<studentInfo> stusql::getPageData(quint32 page, quint32 page_count)
{
    QList<studentInfo> l;
    QSqlQuery q(m_db);
    QString strSql=QString("select * from student order by id limit %1 offset %2").arg(page_count).
            arg((page-1)*page_count);
    q.exec(strSql);

    studentInfo info;
    while(q.next()){
        info.id=q.value(0).toUInt();
        info.name=q.value(1).toString();
        info.age=q.value(2).toUInt();
        info.grade=q.value(3).toUInt();
        info.stu_class=q.value(4).toUInt();
        info.studentid=q.value(5).toUInt();
        info.phone=q.value(6).toString();
        info.wechat=q.value(7).toString();
        l.push_back(info);
    }
   return l;
}


bool stusql::addStu(studentInfo info)
{
    QSqlQuery q(m_db);
    QString strSql=QString("insert into student values(null,'%1',%2,%3,%4,%5,'%6','%7')").
            arg(info.name).
            arg(info.age).
            arg(info.grade).
            arg(info.stu_class).
            arg(info.studentid).
            arg(info.phone).
            arg(info.wechat);
    //执行sql语句
    return q.exec(strSql);
}

bool stusql::addStu(QList<studentInfo> l)
{
    QSqlQuery q(m_db);
    m_db.transaction(); //开启事务
    for(auto info:l){
        QString strSql=QString("insert into student values(null,'%1',%2,%3,%4,%5,'%6','%7')").
                arg(info.name).
                arg(info.age).
                arg(info.grade).
                arg(info.stu_class).
                arg(info.studentid).
                arg(info.phone).
                arg(info.wechat);
        q.exec(strSql); //执行sql语句
    }
    m_db.commit();

    return true;
}

bool stusql::delStu(quint32 id)
{
    QSqlQuery q(m_db);
    QString strSql=QString("delete from student where id =%1").arg(id);
    //执行sql语句
    return q.exec(strSql);
}

bool stusql::updateStuInfo(studentInfo info)
{
    QSqlQuery q(m_db);
    QString strSql=QString("update student set name ='%1',age=%2,grade=%3,class=%4,studentid=%5,phone='%6',wechat='%7' where id=%8;").
            arg(info.name).
            arg(info.age).
            arg(info.grade).
            arg(info.stu_class).
            arg(info.studentid).
            arg(info.phone).
            arg(info.wechat).
            arg(info.id);
    qDebug()<<strSql;
//    qDebug()<<q.exec(strSql);
    //执行sql语句
    return q.exec(strSql);

    //检查sql错误
//    const QSqlError e=q.lastError();
//    if(e.isvalid()){
//        qDebug()<<e.text();
//    }
}

bool stusql::clearStuTable()
{
    QSqlQuery q(m_db);
     //执行sql语句
    QString strSql=QString("delete from student");
    bool sql1=q.exec(strSql);
    QString strSql1=QString("delete from sqlite_sequence  where name = 'student'"); //id从0开始递增
    bool sql2=q.exec(strSql1);
    if(sql1 && sql2)
        return true;
    else
        return false;
}

quint32 stusql::getUserSum()
{
    QSqlQuery q(m_db);
    q.exec("select count(id) from username");
    quint32 user_Sum=0;
    while(q.next()){
        user_Sum=q.value(0).toUInt();
    }
    return user_Sum;
}

QList<userInfo> stusql::getAllUser()
{
    QList<userInfo> l;
    QSqlQuery q(m_db);
    QString strSql=QString("select *from username");
    q.exec(strSql);
    userInfo info;
    while(q.next()){
        info.username=q.value(0).toString();
        info.password=q.value(1).toString();
        info.aut=q.value(2).toString();
        l.push_back(info);
    }
    return l;
}

bool stusql::user_isExit(QString username)
{
    QSqlQuery q(m_db);
    QString strSql=QString("select *from username where username='%1'").arg(username);
    q.exec(strSql);
    return q.next();
}

bool stusql::user_isExit(QString username,QString password)
{
    QSqlQuery q(m_db);
    QString strSql=QString("select *from username where username='%1' and password='%2'").arg(username).arg(password);
    q.exec(strSql);
    return q.next();
}

bool stusql::addUser(userInfo info)
{
    QSqlQuery q(m_db);
    QString strSql=QString("insert into username values('%1','%2','%3')").
            arg(info.username).
            arg(info.password).
            arg(info.aut);
    //执行sql语句
    return q.exec(strSql);
}

bool stusql::addUser(QList<userInfo> l)
{
    QSqlQuery q(m_db);
    m_db.transaction(); //开启事务
    for(auto info:l){
        QString strSql=QString("insert into username values('%1','%2','%3')").
                arg(info.username).
                arg(info.password).
                arg(info.aut);
        q.exec(strSql); //执行sql语句
    }
    m_db.commit();

    return true;
}

bool stusql::updateUser(userInfo info)
{
    QSqlQuery q(m_db);
    QString strSql=QString("update username set password='%1',auth='%2' where username ='%3'").
            arg(info.password).
            arg(info.aut).
            arg(info.username);
    //执行sql语句
    return q.exec(strSql);
    //检查sql错误
//    const QSqlError e=q.lastError();
//    if(e.isvalid()){
//        qDebug()<<e.text();
    //    }
}

bool stusql::clearUserTable()
{
    QSqlQuery q(m_db);
     //执行sql语句
    QString strSql=QString("delete from username");
    return q.exec(strSql);

}

bool stusql::delUser(QString username)
{
    QSqlQuery q(m_db);
    QString strSql=QString("delete from username where username='%1'").arg(username);
    return q.exec(strSql);
}
