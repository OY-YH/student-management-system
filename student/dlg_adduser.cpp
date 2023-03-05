#include "dlg_adduser.h"
#include "ui_dlg_adduser.h"
#include <QMessageBox>

dlg_adduser::dlg_adduser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg_adduser)
{
    ui->setupUi(this);
}

dlg_adduser::~dlg_adduser()
{
    delete ui;
}

void dlg_adduser::setType(bool isAdd, userInfo info)
{
    m_isAdd=isAdd;
//    m_info=info;
//    m_id=info.id;
    ui->le_username->setText(info.username);
    ui->le_password->setText(info.password);
    ui->le_auth->setText(info.aut);

}

void dlg_adduser::on_btn_user_save_clicked()
{
    userInfo info;
    auto ptr=stusql::getinstance();
    info.username=ui->le_username->text();
    info.password=ui->le_password->text();
    info.aut=ui->le_auth->text();

    //修改复用
    bool t_or_f;
    if(m_isAdd){
        t_or_f=ptr->addUser(info);
    }
    else{
//        info.id=m_id;
        t_or_f=ptr->updateUser(info);
    }
//    bool t_or_f=ptr->addStu(info);
    //显示添加成功的提示
    if(t_or_f){
        QMessageBox::information(nullptr,"信息","存储成功");
        this->hide();
    }
    else{
        QMessageBox::information(nullptr,"信息","存储失败");
    }
}


void dlg_adduser::on_btn_use_cancel_clicked()
{
    this->hide();
}

