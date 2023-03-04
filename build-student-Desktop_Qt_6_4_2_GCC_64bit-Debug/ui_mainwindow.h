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
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QCheckBox *checkBox;
    QPushButton *pushButton_4;
    QPushButton *btn_simulation;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QLabel *lb_sum;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1023, 684);
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

        gridLayout_3->addWidget(treeWidget, 2, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 130, 189);\n"
"border:1px;\n"
""));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 135, 135);"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(35, 35));
        label_2->setMaximumSize(QSize(35, 35));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/icon);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(17);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_3->addWidget(widget, 0, 0, 1, 2);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setObjectName("gridLayout_4");
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(40, 0));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(pushButton_2, 0, 3, 1, 1);

        tableWidget = new QTableWidget(page);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
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
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem15);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(583, 0));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableWidget, 2, 0, 1, 7);

        checkBox = new QCheckBox(page);
        checkBox->setObjectName("checkBox");

        gridLayout_4->addWidget(checkBox, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(40, 0));
        pushButton_4->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(pushButton_4, 0, 5, 1, 1);

        btn_simulation = new QPushButton(page);
        btn_simulation->setObjectName("btn_simulation");

        gridLayout_4->addWidget(btn_simulation, 3, 0, 1, 1);

        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");

        gridLayout_4->addWidget(lineEdit, 0, 2, 1, 1);

        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(40, 0));
        pushButton_5->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(pushButton_5, 0, 6, 1, 1);

        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(40, 0));
        pushButton_3->setStyleSheet(QString::fromUtf8(""));

        gridLayout_4->addWidget(pushButton_3, 0, 4, 1, 1);

        lb_sum = new QLabel(page);
        lb_sum->setObjectName("lb_sum");

        gridLayout_4->addWidget(lb_sum, 3, 1, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1023, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

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
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\271\264\351\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\271\264\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\345\276\256\344\277\241", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "1", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "aa", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "21413144", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 6);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "132421534", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 7);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "afeweqg", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_simulation->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\225\260\346\215\256", nullptr));
        lineEdit->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        lb_sum->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
