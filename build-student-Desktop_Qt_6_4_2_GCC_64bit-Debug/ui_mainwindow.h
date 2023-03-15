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
    QGridLayout *gridLayout_7;
    QWidget *bg_title;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *lb_username;
    QLabel *label_2;
    QPushButton *btn_exit;
    QLabel *lb_title;
    QSpacerItem *horizontalSpacer;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_stu;
    QGridLayout *gridLayout_3;
    QPushButton *btn_simulation;
    QLabel *lb_sum;
    QCheckBox *cb_all;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QPushButton *btn_update;
    QPushButton *btn_del;
    QPushButton *btn_add;
    QPushButton *btn_clearStu;
    QTableWidget *tableWidget;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QLineEdit *le_search;
    QPushButton *btn_search;
    QWidget *page_3;
    QWidget *page_user;
    QGridLayout *gridLayout_9;
    QCheckBox *cb_all_2;
    QPushButton *btn_user_simulation;
    QTableWidget *tableWidget_2;
    QLabel *lb_userSum;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *le_user_search;
    QPushButton *btn_user_search;
    QPushButton *btn_user_clear;
    QWidget *widget_3;
    QGridLayout *gridLayout_8;
    QPushButton *btn_user_add;
    QPushButton *btn_user_update;
    QPushButton *btn_user_del;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1206, 680);
        MainWindow->setMinimumSize(QSize(1080, 680));
        QFont font;
        font.setPointSize(15);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName("gridLayout_7");
        bg_title = new QWidget(centralwidget);
        bg_title->setObjectName("bg_title");
        bg_title->setMinimumSize(QSize(0, 65));
        bg_title->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(bg_title);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(bg_title);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(269, 0));
        widget_2->setMaximumSize(QSize(300, 16777215));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lb_username = new QLabel(widget_2);
        lb_username->setObjectName("lb_username");
        lb_username->setMinimumSize(QSize(75, 0));
        lb_username->setMaximumSize(QSize(80, 16777215));
        QFont font1;
        font1.setPointSize(14);
        lb_username->setFont(font1);
        lb_username->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lb_username, 0, 2, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(35, 35));
        label_2->setMaximumSize(QSize(35, 35));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon);"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        btn_exit = new QPushButton(widget_2);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setMinimumSize(QSize(0, 35));
        btn_exit->setMaximumSize(QSize(110, 16777215));
        btn_exit->setFont(font1);
        btn_exit->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_exit, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 2, 1, 1);

        lb_title = new QLabel(bg_title);
        lb_title->setObjectName("lb_title");
        lb_title->setMinimumSize(QSize(480, 0));
        QFont font2;
        font2.setPointSize(17);
        lb_title->setFont(font2);
        lb_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_title, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_7->addWidget(bg_title, 0, 0, 1, 2);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setMinimumSize(QSize(200, 0));
        treeWidget->setMaximumSize(QSize(300, 16777215));
        treeWidget->setHeaderHidden(true);

        gridLayout_7->addWidget(treeWidget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QFont font3;
        font3.setPointSize(13);
        stackedWidget->setFont(font3);
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_stu = new QWidget();
        page_stu->setObjectName("page_stu");
        page_stu->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(page_stu);
        gridLayout_3->setObjectName("gridLayout_3");
        btn_simulation = new QPushButton(page_stu);
        btn_simulation->setObjectName("btn_simulation");
        btn_simulation->setMinimumSize(QSize(100, 35));
        btn_simulation->setMaximumSize(QSize(110, 16777215));
        btn_simulation->setFont(font1);

        gridLayout_3->addWidget(btn_simulation, 3, 0, 1, 1);

        lb_sum = new QLabel(page_stu);
        lb_sum->setObjectName("lb_sum");
        lb_sum->setMaximumSize(QSize(150, 16777215));
        lb_sum->setLayoutDirection(Qt::RightToLeft);

        gridLayout_3->addWidget(lb_sum, 3, 5, 1, 1);

        cb_all = new QCheckBox(page_stu);
        cb_all->setObjectName("cb_all");
        cb_all->setMinimumSize(QSize(100, 35));
        cb_all->setFont(font1);

        gridLayout_3->addWidget(cb_all, 0, 0, 1, 1);

        widget = new QWidget(page_stu);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(300, 0));
        widget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(4);
        gridLayout_6->setContentsMargins(9, -1, 9, -1);
        btn_update = new QPushButton(widget);
        btn_update->setObjectName("btn_update");
        btn_update->setMinimumSize(QSize(88, 35));
        btn_update->setMaximumSize(QSize(88, 16777215));
        btn_update->setFont(font1);
        btn_update->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(btn_update, 0, 1, 1, 1);

        btn_del = new QPushButton(widget);
        btn_del->setObjectName("btn_del");
        btn_del->setMinimumSize(QSize(88, 35));
        btn_del->setMaximumSize(QSize(88, 16777215));
        btn_del->setFont(font1);
        btn_del->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(btn_del, 0, 2, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName("btn_add");
        btn_add->setMinimumSize(QSize(88, 35));
        btn_add->setMaximumSize(QSize(88, 16777215));
        btn_add->setFont(font1);
        btn_add->setStyleSheet(QString::fromUtf8(""));

        gridLayout_6->addWidget(btn_add, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 0, 1, 1, 1);

        btn_clearStu = new QPushButton(page_stu);
        btn_clearStu->setObjectName("btn_clearStu");
        btn_clearStu->setMinimumSize(QSize(100, 35));
        btn_clearStu->setMaximumSize(QSize(110, 16777215));
        btn_clearStu->setFont(font1);

        gridLayout_3->addWidget(btn_clearStu, 3, 1, 1, 1);

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
        tableWidget->setMinimumSize(QSize(980, 0));
        tableWidget->setFont(font);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableWidget->horizontalHeader()->setMinimumSectionSize(90);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(35);
        tableWidget->verticalHeader()->setDefaultSectionSize(35);

        gridLayout_3->addWidget(tableWidget, 2, 0, 1, 6);

        widget_4 = new QWidget(page_stu);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(350, 16777215));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(2);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        le_search = new QLineEdit(widget_4);
        le_search->setObjectName("le_search");
        le_search->setMinimumSize(QSize(200, 35));
        le_search->setMaximumSize(QSize(300, 16777215));

        gridLayout_4->addWidget(le_search, 1, 0, 1, 1);

        btn_search = new QPushButton(widget_4);
        btn_search->setObjectName("btn_search");
        btn_search->setMinimumSize(QSize(88, 35));
        btn_search->setMaximumSize(QSize(88, 16777215));
        btn_search->setFont(font1);
        btn_search->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(btn_search, 1, 1, 1, 1);


        gridLayout_3->addWidget(widget_4, 0, 5, 1, 1);

        stackedWidget->addWidget(page_stu);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        page_user = new QWidget();
        page_user->setObjectName("page_user");
        gridLayout_9 = new QGridLayout(page_user);
        gridLayout_9->setObjectName("gridLayout_9");
        cb_all_2 = new QCheckBox(page_user);
        cb_all_2->setObjectName("cb_all_2");
        cb_all_2->setMinimumSize(QSize(100, 35));
        cb_all_2->setFont(font);

        gridLayout_9->addWidget(cb_all_2, 0, 0, 1, 1);

        btn_user_simulation = new QPushButton(page_user);
        btn_user_simulation->setObjectName("btn_user_simulation");
        btn_user_simulation->setMinimumSize(QSize(100, 35));
        btn_user_simulation->setMaximumSize(QSize(110, 35));
        btn_user_simulation->setFont(font);

        gridLayout_9->addWidget(btn_user_simulation, 2, 0, 1, 1);

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
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(90);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setMinimumSectionSize(35);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(45);

        gridLayout_9->addWidget(tableWidget_2, 1, 0, 1, 7);

        lb_userSum = new QLabel(page_user);
        lb_userSum->setObjectName("lb_userSum");
        lb_userSum->setMinimumSize(QSize(150, 0));
        lb_userSum->setMaximumSize(QSize(150, 16777215));
        lb_userSum->setLayoutDirection(Qt::RightToLeft);

        gridLayout_9->addWidget(lb_userSum, 2, 6, 1, 1);

        widget_5 = new QWidget(page_user);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(400, 16777215));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        le_user_search = new QLineEdit(widget_5);
        le_user_search->setObjectName("le_user_search");
        le_user_search->setMinimumSize(QSize(200, 35));
        le_user_search->setMaximumSize(QSize(244, 16777215));

        gridLayout_5->addWidget(le_user_search, 0, 0, 1, 1);

        btn_user_search = new QPushButton(widget_5);
        btn_user_search->setObjectName("btn_user_search");
        btn_user_search->setMinimumSize(QSize(88, 35));
        btn_user_search->setMaximumSize(QSize(88, 16777215));
        btn_user_search->setFont(font);

        gridLayout_5->addWidget(btn_user_search, 0, 1, 1, 1);


        gridLayout_9->addWidget(widget_5, 0, 6, 1, 1);

        btn_user_clear = new QPushButton(page_user);
        btn_user_clear->setObjectName("btn_user_clear");
        btn_user_clear->setMinimumSize(QSize(100, 35));
        btn_user_clear->setMaximumSize(QSize(110, 16777215));
        btn_user_clear->setFont(font);

        gridLayout_9->addWidget(btn_user_clear, 2, 1, 1, 1);

        widget_3 = new QWidget(page_user);
        widget_3->setObjectName("widget_3");
        gridLayout_8 = new QGridLayout(widget_3);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setHorizontalSpacing(4);
        btn_user_add = new QPushButton(widget_3);
        btn_user_add->setObjectName("btn_user_add");
        btn_user_add->setMinimumSize(QSize(88, 35));
        btn_user_add->setFont(font);

        gridLayout_8->addWidget(btn_user_add, 0, 0, 1, 1);

        btn_user_update = new QPushButton(widget_3);
        btn_user_update->setObjectName("btn_user_update");
        btn_user_update->setMinimumSize(QSize(88, 35));
        btn_user_update->setFont(font);

        gridLayout_8->addWidget(btn_user_update, 0, 1, 1, 1);

        btn_user_del = new QPushButton(widget_3);
        btn_user_del->setObjectName("btn_user_del");
        btn_user_del->setMinimumSize(QSize(88, 35));
        btn_user_del->setFont(font);

        gridLayout_8->addWidget(btn_user_del, 0, 2, 1, 1);


        gridLayout_9->addWidget(widget_3, 0, 1, 1, 1);

        stackedWidget->addWidget(page_user);

        gridLayout_7->addWidget(stackedWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1206, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(btn_exit, cb_all_2);
        QWidget::setTabOrder(cb_all_2, tableWidget_2);
        QWidget::setTabOrder(tableWidget_2, le_user_search);
        QWidget::setTabOrder(le_user_search, btn_user_search);
        QWidget::setTabOrder(btn_user_search, btn_user_simulation);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        lb_username->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        label_2->setText(QString());
        btn_exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        btn_exit->setProperty("btn", QVariant(QString()));
        btn_exit->setProperty("btn_user", QVariant(QString()));
        lb_title->setText(QCoreApplication::translate("MainWindow", "Student Mangament System", nullptr));
        btn_simulation->setText(QCoreApplication::translate("MainWindow", "Simulation", nullptr));
        btn_simulation->setProperty("btn_bottom", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        lb_sum->setText(QString());
        cb_all->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        btn_update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        btn_update->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_del->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btn_del->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btn_add->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        btn_clearStu->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        btn_clearStu->setProperty("btn_bottom", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
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
        le_search->setText(QString());
        btn_search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        btn_search->setProperty("btn", QVariant(QCoreApplication::translate("MainWindow", "main", nullptr)));
        cb_all_2->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        btn_user_simulation->setText(QCoreApplication::translate("MainWindow", "Simulation", nullptr));
        btn_user_simulation->setProperty("btn_user", QVariant(QCoreApplication::translate("MainWindow", "main_user", nullptr)));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        lb_userSum->setText(QString());
        btn_user_search->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        btn_user_search->setProperty("btn_user", QVariant(QCoreApplication::translate("MainWindow", "main_user", nullptr)));
        btn_user_clear->setText(QCoreApplication::translate("MainWindow", "Clear All", nullptr));
        btn_user_clear->setProperty("btn_user", QVariant(QCoreApplication::translate("MainWindow", "main_user", nullptr)));
        btn_user_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btn_user_add->setProperty("btn_user", QVariant(QCoreApplication::translate("MainWindow", "main_user", nullptr)));
        btn_user_update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        btn_user_update->setProperty("btn_user", QVariant(QCoreApplication::translate("MainWindow", "main_user", nullptr)));
        btn_user_del->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        btn_user_del->setProperty("btn_user", QVariant(QCoreApplication::translate("MainWindow", "main_user", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
