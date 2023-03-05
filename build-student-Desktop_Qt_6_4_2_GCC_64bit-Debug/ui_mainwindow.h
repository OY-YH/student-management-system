/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_stu;
    QGridLayout *gridLayout_4;
    QPushButton *btn_update;
    QPushButton *btn_add;
    QTableWidget *tableWidget;
    QPushButton *btn_del;
    QCheckBox *checkBox;
    QPushButton *btn_clearStu;
    QPushButton *btn_simulation;
    QLabel *lb_sum;
    QPushButton *btn_search;
    QLineEdit *le_search;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_3;
    QWidget *page_user;
    QGridLayout *gridLayout_5;
    QPushButton *btn_user_update;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_2;
    QTableWidget *tableWidget_2;
    QPushButton *btn_user_del;
    QLineEdit *le_user_search;
    QPushButton *btn_user_add;
    QPushButton *btn_user_search;
    QPushButton *btn_user_simulation;
    QPushButton *btn_user_clear;
    QLabel *lb_userSum;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *btn_exit;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(848, 635);
        QFont font;
        font.setPointSize(15);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget{\n"
"background-color: rgb(124, 224, 178);\n"
"border:1px;\n"
"};"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setMinimumSize(QSize(175, 0));
        treeWidget->setMaximumSize(QSize(175, 16777215));
        treeWidget->header()->setVisible(false);

        gridLayout_3->addWidget(treeWidget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_stu = new QWidget();
        page_stu->setObjectName("page_stu");
        gridLayout_4 = new QGridLayout(page_stu);
        gridLayout_4->setObjectName("gridLayout_4");
        btn_update = new QPushButton(page_stu);
        btn_update->setObjectName("btn_update");
        btn_update->setMinimumSize(QSize(88, 30));
        btn_update->setMaximumSize(QSize(88, 16777215));
        btn_update->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_update, 0, 3, 1, 1);

        btn_add = new QPushButton(page_stu);
        btn_add->setObjectName("btn_add");
        btn_add->setMinimumSize(QSize(88, 30));
        btn_add->setMaximumSize(QSize(88, 16777215));
        btn_add->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_add, 0, 2, 1, 1);

        tableWidget = new QTableWidget(page_stu);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem9);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(583, 0));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableWidget, 1, 0, 2, 11);

        btn_del = new QPushButton(page_stu);
        btn_del->setObjectName("btn_del");
        btn_del->setMinimumSize(QSize(88, 30));
        btn_del->setMaximumSize(QSize(88, 16777215));
        btn_del->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_del, 0, 4, 1, 1);

        checkBox = new QCheckBox(page_stu);
        checkBox->setObjectName("checkBox");
        checkBox->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setPointSize(14);
        checkBox->setFont(font1);

        gridLayout_4->addWidget(checkBox, 0, 0, 1, 1);

        btn_clearStu = new QPushButton(page_stu);
        btn_clearStu->setObjectName("btn_clearStu");

        gridLayout_4->addWidget(btn_clearStu, 3, 2, 1, 1);

        btn_simulation = new QPushButton(page_stu);
        btn_simulation->setObjectName("btn_simulation");

        gridLayout_4->addWidget(btn_simulation, 3, 0, 1, 1);

        lb_sum = new QLabel(page_stu);
        lb_sum->setObjectName("lb_sum");

        gridLayout_4->addWidget(lb_sum, 3, 3, 1, 1);

        btn_search = new QPushButton(page_stu);
        btn_search->setObjectName("btn_search");
        btn_search->setMinimumSize(QSize(88, 30));
        btn_search->setMaximumSize(QSize(88, 16777215));
        btn_search->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_search, 0, 7, 1, 1);

        le_search = new QLineEdit(page_stu);
        le_search->setObjectName("le_search");
        le_search->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(le_search, 0, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 5, 1, 1);

        stackedWidget->addWidget(page_stu);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        page_user = new QWidget();
        page_user->setObjectName("page_user");
        gridLayout_5 = new QGridLayout(page_user);
        gridLayout_5->setObjectName("gridLayout_5");
        btn_user_update = new QPushButton(page_user);
        btn_user_update->setObjectName("btn_user_update");

        gridLayout_5->addWidget(btn_user_update, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(42, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        checkBox_2 = new QCheckBox(page_user);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout_5->addWidget(checkBox_2, 0, 0, 1, 1);

        tableWidget_2 = new QTableWidget(page_user);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setMinimumSectionSize(35);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(45);

        gridLayout_5->addWidget(tableWidget_2, 2, 0, 1, 7);

        btn_user_del = new QPushButton(page_user);
        btn_user_del->setObjectName("btn_user_del");

        gridLayout_5->addWidget(btn_user_del, 0, 3, 1, 1);

        le_user_search = new QLineEdit(page_user);
        le_user_search->setObjectName("le_user_search");

        gridLayout_5->addWidget(le_user_search, 0, 5, 1, 1);

        btn_user_add = new QPushButton(page_user);
        btn_user_add->setObjectName("btn_user_add");

        gridLayout_5->addWidget(btn_user_add, 0, 1, 1, 1);

        btn_user_search = new QPushButton(page_user);
        btn_user_search->setObjectName("btn_user_search");

        gridLayout_5->addWidget(btn_user_search, 0, 6, 1, 1);

        btn_user_simulation = new QPushButton(page_user);
        btn_user_simulation->setObjectName("btn_user_simulation");

        gridLayout_5->addWidget(btn_user_simulation, 3, 0, 1, 1);

        btn_user_clear = new QPushButton(page_user);
        btn_user_clear->setObjectName("btn_user_clear");

        gridLayout_5->addWidget(btn_user_clear, 3, 1, 1, 1);

        lb_userSum = new QLabel(page_user);
        lb_userSum->setObjectName("lb_userSum");

        gridLayout_5->addWidget(lb_userSum, 3, 2, 1, 1);

        stackedWidget->addWidget(page_user);

        gridLayout_3->addWidget(stackedWidget, 1, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 130, 189);\n"
"border:1px;\n"
""));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(300, 0));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 135, 135);"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(35, 35));
        label_2->setMaximumSize(QSize(35, 35));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon);"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        btn_exit = new QPushButton(widget_2);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_exit, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(500, 0));
        QFont font2;
        font2.setPointSize(17);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 1, 1, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 848, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\271\264\351\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\345\271\264\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\345\276\256\344\277\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        btn_clearStu->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\255\246\347\224\237\350\241\250", nullptr));
        btn_simulation->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\225\260\346\215\256", nullptr));
        lb_sum->setText(QString());
        btn_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        le_search->setText(QString());
        btn_user_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        btn_user_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_user_add->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        btn_user_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        btn_user_simulation->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\225\260\346\215\256", nullptr));
        btn_user_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\347\224\250\346\210\267\350\241\250", nullptr));
        lb_userSum->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        label_2->setText(QString());
        btn_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
