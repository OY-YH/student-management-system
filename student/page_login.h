#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H

#include <QWidget>
#include "stusql.h"

namespace Ui {
class Page_login;
}

class Page_login : public QWidget
{
    Q_OBJECT

public:
    explicit Page_login(QWidget *parent = nullptr);
    ~Page_login();

private slots:
    void on_bin_login_clicked();

    void on_btn_register_clicked();

signals:
    void sendLoginSuccess();
    void sendRegisterSUccess();

private:
    Ui::Page_login *ui;
    stusql *m_ptrstuSql;
};

#endif // PAGE_LOGIN_H
