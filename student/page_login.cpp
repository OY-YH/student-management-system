#include "page_login.h"
#include "ui_page_login.h"

Page_login::Page_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_login)
{
    ui->setupUi(this);
}

Page_login::~Page_login()
{
    delete ui;
}

void Page_login::on_bin_login_clicked()
{
    //数据库查找用户名和密码

    //失败就提示

    //成功进入主界面
    emit sendLoginSuccess();
}


void Page_login::on_bin_exit_clicked()
{
    //退出
    exit(0);
}

