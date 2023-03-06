/********************************************************************************
** Form generated from reading UI file 'dlg_regiseter.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_REGISETER_H
#define UI_DLG_REGISETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_regiseter
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *lb_title1;
    QLineEdit *le_reg_repassword;
    QLineEdit *le_reg_password;
    QLabel *label_5;
    QLabel *lb_title2;
    QLineEdit *le_reg_username;
    QComboBox *cb_auth;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_register_sure;
    QPushButton *btn_reg_cancel;

    void setupUi(QDialog *Dlg_regiseter)
    {
        if (Dlg_regiseter->objectName().isEmpty())
            Dlg_regiseter->setObjectName("Dlg_regiseter");
        Dlg_regiseter->resize(800, 600);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        Dlg_regiseter->setFont(font);
        gridLayout_2 = new QGridLayout(Dlg_regiseter);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(Dlg_regiseter);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 28));
        label->setMaximumSize(QSize(16777215, 28));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 3, 3, 1, 1);

        label_3 = new QLabel(Dlg_regiseter);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 28));
        label_3->setMaximumSize(QSize(16777215, 28));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 7, 3, 1, 1);

        label_2 = new QLabel(Dlg_regiseter);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 28));
        label_2->setMaximumSize(QSize(16777215, 28));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 5, 3, 1, 1);

        lb_title1 = new QLabel(Dlg_regiseter);
        lb_title1->setObjectName("lb_title1");
        lb_title1->setMinimumSize(QSize(0, 50));
        lb_title1->setMaximumSize(QSize(16777215, 50));
        lb_title1->setFont(font);

        gridLayout_2->addWidget(lb_title1, 1, 3, 1, 1);

        le_reg_repassword = new QLineEdit(Dlg_regiseter);
        le_reg_repassword->setObjectName("le_reg_repassword");
        le_reg_repassword->setMinimumSize(QSize(322, 32));
        le_reg_repassword->setMaximumSize(QSize(274, 16777215));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        le_reg_repassword->setFont(font2);
        le_reg_repassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(le_reg_repassword, 8, 3, 1, 1);

        le_reg_password = new QLineEdit(Dlg_regiseter);
        le_reg_password->setObjectName("le_reg_password");
        le_reg_password->setMinimumSize(QSize(322, 32));
        le_reg_password->setMaximumSize(QSize(274, 16777215));
        le_reg_password->setFont(font2);
        le_reg_password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(le_reg_password, 6, 3, 1, 1);

        label_5 = new QLabel(Dlg_regiseter);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(350, 400));
        label_5->setMaximumSize(QSize(400, 16777215));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(label_5, 0, 0, 13, 1);

        lb_title2 = new QLabel(Dlg_regiseter);
        lb_title2->setObjectName("lb_title2");
        lb_title2->setMaximumSize(QSize(16777215, 50));
        lb_title2->setFont(font);

        gridLayout_2->addWidget(lb_title2, 2, 3, 1, 1);

        le_reg_username = new QLineEdit(Dlg_regiseter);
        le_reg_username->setObjectName("le_reg_username");
        le_reg_username->setMinimumSize(QSize(322, 32));
        le_reg_username->setMaximumSize(QSize(322, 16777215));
        le_reg_username->setFont(font2);

        gridLayout_2->addWidget(le_reg_username, 4, 3, 1, 1);

        cb_auth = new QComboBox(Dlg_regiseter);
        cb_auth->addItem(QString());
        cb_auth->addItem(QString());
        cb_auth->addItem(QString());
        cb_auth->setObjectName("cb_auth");
        cb_auth->setMinimumSize(QSize(322, 35));
        cb_auth->setMaximumSize(QSize(322, 16777215));
        cb_auth->setFont(font1);

        gridLayout_2->addWidget(cb_auth, 10, 3, 1, 1);

        label_4 = new QLabel(Dlg_regiseter);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 28));
        label_4->setMaximumSize(QSize(16777215, 28));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 9, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 12, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 3, 1, 1);

        widget = new QWidget(Dlg_regiseter);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 100));
        widget->setMaximumSize(QSize(16777215, 100));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        btn_register_sure = new QPushButton(widget);
        btn_register_sure->setObjectName("btn_register_sure");
        btn_register_sure->setMinimumSize(QSize(0, 37));

        gridLayout->addWidget(btn_register_sure, 0, 0, 1, 1);

        btn_reg_cancel = new QPushButton(widget);
        btn_reg_cancel->setObjectName("btn_reg_cancel");
        btn_reg_cancel->setMinimumSize(QSize(0, 38));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        btn_reg_cancel->setFont(font3);

        gridLayout->addWidget(btn_reg_cancel, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget, 11, 3, 1, 1);


        retranslateUi(Dlg_regiseter);

        QMetaObject::connectSlotsByName(Dlg_regiseter);
    } // setupUi

    void retranslateUi(QDialog *Dlg_regiseter)
    {
        Dlg_regiseter->setWindowTitle(QCoreApplication::translate("Dlg_regiseter", "\350\277\231\346\230\257\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label->setText(QCoreApplication::translate("Dlg_regiseter", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_regiseter", "Ensure your password", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_regiseter", "PassWord", nullptr));
        lb_title1->setText(QCoreApplication::translate("Dlg_regiseter", "Hello", nullptr));
        label_5->setText(QString());
        lb_title2->setText(QCoreApplication::translate("Dlg_regiseter", "welcome to Us !", nullptr));
        cb_auth->setItemText(0, QCoreApplication::translate("Dlg_regiseter", "null", nullptr));
        cb_auth->setItemText(1, QCoreApplication::translate("Dlg_regiseter", "\347\256\241\347\220\206\345\221\230", nullptr));
        cb_auth->setItemText(2, QCoreApplication::translate("Dlg_regiseter", "\345\255\246\347\224\237", nullptr));

        label_4->setText(QCoreApplication::translate("Dlg_regiseter", "aut", nullptr));
        btn_register_sure->setText(QCoreApplication::translate("Dlg_regiseter", "Sure", nullptr));
        btn_reg_cancel->setText(QCoreApplication::translate("Dlg_regiseter", "Return Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_regiseter: public Ui_Dlg_regiseter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_REGISETER_H
