#include "page_login.h"
#include "ui_page_login.h"
#include "dlg_regiseter.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>

Page_login::Page_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_login)
{
    ui->setupUi(this);

    QFile file;
    file.setFileName(":/dlg.css");
    file.open(QIODevice::ReadOnly);    //只读,true
    QString strQss=file.readAll();
    setStyleSheet(strQss);
}

Page_login::~Page_login()
{
    delete ui;
}

void Page_login::on_bin_login_clicked()
{
    auto ptr=stusql::getinstance();
//    获取登录界面的数据
    QString username=ui->le_username->text();
    QString password=ui->le_password->text();
    if(""==username){
        QMessageBox::information(this,"登录","用户名不能为空");
    }else if(""==password){
        QMessageBox::information(this,"登录","密码不能为空");
    }
    else{
        //数据库查找用户名和密码
        bool is_Exit=ptr->user_isExit(username,password);
        if(is_Exit){
             //成功进入主界面
            emit sendLoginSuccess();
            this->hide();
        }
        else{
            //失败就提示
            QMessageBox::warning(NULL,"Error","用户名或密码错误！！！");
        }
    }

}



void Page_login::on_btn_register_clicked()
{
//    this->hide();
    Dlg_regiseter *reg=new Dlg_regiseter;
    reg->exec();
    emit sendRegisterSUccess();
//    auto ptr=MainWindow::getinstance();
//    ptr->updateUserTable();
}

