#include "dlg_addstu.h"
#include "ui_dlg_addstu.h"
#include "stusql.h"
#include <QMessageBox>

Dlg_AddStu::Dlg_AddStu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dlg_AddStu)
{
    ui->setupUi(this);
}

Dlg_AddStu::~Dlg_AddStu()
{
    delete ui;
}

void Dlg_AddStu::setType(bool isAdd,studentInfo info)
{
    m_isAdd=isAdd;
//    m_info=info;
    m_id=info.id;
    ui->le_name->setText(info.name);
    ui->sb_age->setValue(info.age);
    ui->le_grade->setText(QString::number(info.grade));
    ui->le_class->setText(QString::number(info.stu_class));
    ui->le_stuid->setText(QString::number(info.studentid));
    ui->le_phone->setText(info.phone);
    ui->le_wechat->setText(info.wechat);

}

void Dlg_AddStu::on_btn_save_clicked()
{
    studentInfo info;
    auto ptr=stusql::getinstance();
    info.name=ui->le_name->text();
    info.age=ui->sb_age->text().toUInt();
    info.grade=ui->le_grade->text().toUInt();
    info.stu_class=ui->le_class->text().toUInt();
    info.studentid=ui->le_stuid->text().toUInt();
    info.phone=ui->le_phone->text();
    info.wechat=ui->le_wechat->text();
    //修改复用
    bool t_or_f;
    if(m_isAdd){
        t_or_f=ptr->addStu(info);
    }
    else{
        info.id=m_id;
        t_or_f=ptr->updateStuInfo(info);
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


void Dlg_AddStu::on_btn_cancel_clicked()
{
    this->hide();
}

