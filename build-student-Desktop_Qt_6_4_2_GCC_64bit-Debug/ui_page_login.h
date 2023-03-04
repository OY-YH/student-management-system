/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_login
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *bin_login;
    QPushButton *bin_exit;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLineEdit *le_username;
    QLineEdit *le_password;
    QSpacerItem *horizontalSpacer;
    QLabel *lb1;
    QLabel *lb2;

    void setupUi(QWidget *Page_login)
    {
        if (Page_login->objectName().isEmpty())
            Page_login->setObjectName("Page_login");
        Page_login->resize(400, 240);
        Page_login->setMinimumSize(QSize(400, 240));
        Page_login->setMaximumSize(QSize(400, 240));
        Page_login->setSizeIncrement(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon"), QSize(), QIcon::Normal, QIcon::Off);
        Page_login->setWindowIcon(icon);
        gridLayout = new QGridLayout(Page_login);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(Page_login);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        widget = new QWidget(Page_login);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 45));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        bin_login = new QPushButton(widget);
        bin_login->setObjectName("bin_login");
        bin_login->setMinimumSize(QSize(0, 30));
        bin_login->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(bin_login, 0, 0, 1, 1);

        bin_exit = new QPushButton(widget);
        bin_exit->setObjectName("bin_exit");
        bin_exit->setMinimumSize(QSize(0, 30));
        bin_exit->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(bin_exit, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 3, 0, 1, 1);

        widget_2 = new QWidget(Page_login);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 100));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        le_username = new QLineEdit(widget_2);
        le_username->setObjectName("le_username");
        le_username->setMaxLength(8);

        gridLayout_3->addWidget(le_username, 0, 1, 1, 1);

        le_password = new QLineEdit(widget_2);
        le_password->setObjectName("le_password");
        le_password->setMaxLength(8);
        le_password->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(le_password, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        lb1 = new QLabel(widget_2);
        lb1->setObjectName("lb1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Noto Rashi Hebrew Light")});
        font1.setPointSize(14);
        lb1->setFont(font1);
        lb1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(lb1, 0, 0, 1, 1);

        lb2 = new QLabel(widget_2);
        lb2->setObjectName("lb2");
        lb2->setFont(font1);
        lb2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(lb2, 2, 0, 1, 1);


        gridLayout->addWidget(widget_2, 1, 0, 2, 1);


        retranslateUi(Page_login);

        QMetaObject::connectSlotsByName(Page_login);
    } // setupUi

    void retranslateUi(QWidget *Page_login)
    {
        Page_login->setWindowTitle(QCoreApplication::translate("Page_login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_login->setToolTip(QCoreApplication::translate("Page_login", "\350\277\231\346\230\257\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("Page_login", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        bin_login->setText(QCoreApplication::translate("Page_login", "\347\231\273\345\275\225", nullptr));
        bin_exit->setText(QCoreApplication::translate("Page_login", "\351\200\200\345\207\272", nullptr));
        le_username->setPlaceholderText(QCoreApplication::translate("Page_login", "\350\257\267\350\276\223\345\205\245", nullptr));
        le_password->setPlaceholderText(QCoreApplication::translate("Page_login", "\350\257\267\350\276\223\345\205\245", nullptr));
        lb1->setText(QCoreApplication::translate("Page_login", "\347\224\250\346\210\267\345\220\215", nullptr));
        lb2->setText(QCoreApplication::translate("Page_login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_login: public Ui_Page_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
