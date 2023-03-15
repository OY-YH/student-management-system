#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include "stusql.h"
#include "page_login.h"
#include "dlg_addstu.h"
#include "dlg_adduser.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
//    //创建单例对象
//    static MainWindow *ptrMain;       //类内静态指针，类外初始化
//    static MainWindow *getinstance(){   //返回单例
//        if(nullptr==ptrMain){     //把常量放左边，方便检测，编码规范要求
//            ptrMain=new MainWindow;
//        }
//        return ptrMain;
//    }
    MainWindow(QWidget *parent = nullptr);
//    void closeEvent(QCloseEvent *event);
    ~MainWindow();

    //设置界面美观,按压f6，进行变化
//    virtual void keyPressEvent(QKeyEvent *event);

private slots:
    //模拟数据
    void on_btn_simulation_clicked();
    //增加学生
    void on_btn_add_clicked();
    //清空学生表
    void on_btn_clearStu_clicked();
    //界面退出
    void on_btn_exit_clicked();
    //删除学生信息
    void on_btn_del_clicked();

    void on_btn_update_clicked();

    void on_btn_search_clicked();

    //treeWidget与stackWidget交互
    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);

    void on_btn_user_add_clicked();

    void on_btn_user_update_clicked();

    void on_btn_user_del_clicked();

    void on_btn_user_search_clicked();

    void on_btn_user_simulation_clicked();

    void on_btn_user_clear_clicked();

//    void on_chb_all_clicked();

//    void on_chb_all_stateChanged(int arg1);

private:
    void updateTable();     //学生信息界面刷新
    void updateUserTable();     //用户信息刷新
    QString makePassword(int length);     //生成随机密码

private:
    Ui::MainWindow *ui;
    Page_login m_dlogin;
    stusql *m_ptrstuSql;
    QStringList m_lNames;
    Dlg_AddStu m_dlgAddStu;
    dlg_adduser m_dlgAddUser;

};
#endif // MAINWINDOW_H
