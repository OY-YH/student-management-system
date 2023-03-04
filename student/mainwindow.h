#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stusql.h"
#include "page_login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //设置界面美观,按压f6，进行变化
    virtual void keyPressEvent(QKeyEvent *event);

private slots:
    void on_pushButton_clicked();

    //模拟数据
    void on_btn_simulation_clicked();

private:
    Ui::MainWindow *ui;
    Page_login m_dlogin;
    stusql *m_ptrstuSql;
    QStringList m_lNames;
};
#endif // MAINWINDOW_H
