#ifndef DLG_ADDSTU_H
#define DLG_ADDSTU_H

#include <QDialog>
#include "stusql.h"
namespace Ui {
class Dlg_AddStu;
}

class Dlg_AddStu : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_AddStu(QWidget *parent = nullptr);
    ~Dlg_AddStu();

    void setType(bool isAdd,studentInfo info={});

private slots:
    void on_btn_save_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::Dlg_AddStu *ui;
    bool m_isAdd;   //添加 修改 代码复用
    int m_id;
//    studentInfo m_info;       //修改 需要显示出信息进行修改，根据id
};

#endif // DLG_ADDSTU_H
