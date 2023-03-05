#ifndef DLG_ADDUSER_H
#define DLG_ADDUSER_H

#include <QDialog>
#include "stusql.h"

namespace Ui {
class dlg_adduser;
}

class dlg_adduser : public QDialog
{
    Q_OBJECT

public:
    explicit dlg_adduser(QWidget *parent = nullptr);
    ~dlg_adduser();

    void setType(bool isAdd,userInfo info={});

private slots:
    void on_btn_user_save_clicked();

    void on_btn_use_cancel_clicked();

private:
    Ui::dlg_adduser *ui;
    bool m_isAdd;   //添加 修改 代码复用
};

#endif // DLG_ADDUSER_H
