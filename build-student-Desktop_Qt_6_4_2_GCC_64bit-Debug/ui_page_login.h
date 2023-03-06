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
    QLabel *lb_title;
    QLabel *lb_image;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLineEdit *le_username;
    QLineEdit *le_password;
    QSpacerItem *horizontalSpacer;
    QLabel *lb1;
    QLabel *lb2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *bin_login;
    QPushButton *btn_register;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Page_login)
    {
        if (Page_login->objectName().isEmpty())
            Page_login->setObjectName("Page_login");
        Page_login->resize(780, 520);
        Page_login->setMinimumSize(QSize(780, 520));
        Page_login->setMaximumSize(QSize(780, 520));
        Page_login->setSizeIncrement(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon"), QSize(), QIcon::Normal, QIcon::Off);
        Page_login->setWindowIcon(icon);
        Page_login->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Page_login);
        gridLayout->setObjectName("gridLayout");
        lb_title = new QLabel(Page_login);
        lb_title->setObjectName("lb_title");
        lb_title->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(20);
        lb_title->setFont(font);
        lb_title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lb_title, 0, 0, 1, 1);

        lb_image = new QLabel(Page_login);
        lb_image->setObjectName("lb_image");
        lb_image->setMinimumSize(QSize(300, 500));
        lb_image->setMaximumSize(QSize(400, 16777215));
        lb_image->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lb_image, 0, 1, 3, 1);

        widget_2 = new QWidget(Page_login);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 100));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        le_username = new QLineEdit(widget_2);
        le_username->setObjectName("le_username");
        le_username->setMinimumSize(QSize(0, 40));
        le_username->setMaxLength(8);

        gridLayout_3->addWidget(le_username, 0, 1, 1, 1);

        le_password = new QLineEdit(widget_2);
        le_password->setObjectName("le_password");
        le_password->setMinimumSize(QSize(0, 40));
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


        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_login);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 45));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        bin_login = new QPushButton(widget);
        bin_login->setObjectName("bin_login");
        bin_login->setMinimumSize(QSize(150, 50));
        bin_login->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(bin_login, 0, 0, 1, 1);

        btn_register = new QPushButton(widget);
        btn_register->setObjectName("btn_register");
        btn_register->setMinimumSize(QSize(150, 50));
        btn_register->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(btn_register, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        QWidget::setTabOrder(le_username, le_password);
        QWidget::setTabOrder(le_password, bin_login);
        QWidget::setTabOrder(bin_login, btn_register);

        retranslateUi(Page_login);

        QMetaObject::connectSlotsByName(Page_login);
    } // setupUi

    void retranslateUi(QWidget *Page_login)
    {
        Page_login->setWindowTitle(QCoreApplication::translate("Page_login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_login->setToolTip(QCoreApplication::translate("Page_login", "\350\277\231\346\230\257\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
        lb_title->setText(QCoreApplication::translate("Page_login", "Student \n"
"Management System", nullptr));
        lb_image->setText(QString());
        le_username->setPlaceholderText(QCoreApplication::translate("Page_login", "Please input your username", nullptr));
        le_password->setPlaceholderText(QCoreApplication::translate("Page_login", "Please input your password", nullptr));
        lb1->setText(QCoreApplication::translate("Page_login", "username", nullptr));
        lb2->setText(QCoreApplication::translate("Page_login", "Password", nullptr));
        bin_login->setText(QCoreApplication::translate("Page_login", "Sign in", nullptr));
        btn_register->setText(QCoreApplication::translate("Page_login", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_login: public Ui_Page_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
