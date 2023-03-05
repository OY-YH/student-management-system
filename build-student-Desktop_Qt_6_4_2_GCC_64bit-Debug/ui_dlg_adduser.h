/********************************************************************************
** Form generated from reading UI file 'dlg_adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDUSER_H
#define UI_DLG_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_adduser
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *le_username;
    QLabel *label_2;
    QLineEdit *le_password;
    QLabel *label_3;
    QLineEdit *le_auth;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_user_save;
    QPushButton *btn_use_cancel;

    void setupUi(QDialog *dlg_adduser)
    {
        if (dlg_adduser->objectName().isEmpty())
            dlg_adduser->setObjectName("dlg_adduser");
        dlg_adduser->resize(313, 437);
        gridLayout_2 = new QGridLayout(dlg_adduser);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(dlg_adduser);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_username = new QLineEdit(dlg_adduser);
        le_username->setObjectName("le_username");

        gridLayout_2->addWidget(le_username, 0, 2, 1, 1);

        label_2 = new QLabel(dlg_adduser);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 2);

        le_password = new QLineEdit(dlg_adduser);
        le_password->setObjectName("le_password");

        gridLayout_2->addWidget(le_password, 1, 2, 1, 1);

        label_3 = new QLabel(dlg_adduser);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 2);

        le_auth = new QLineEdit(dlg_adduser);
        le_auth->setObjectName("le_auth");

        gridLayout_2->addWidget(le_auth, 2, 2, 1, 1);

        widget = new QWidget(dlg_adduser);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 100));
        widget->setMaximumSize(QSize(16777215, 100));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        btn_user_save = new QPushButton(widget);
        btn_user_save->setObjectName("btn_user_save");
        btn_user_save->setFont(font);

        gridLayout->addWidget(btn_user_save, 0, 0, 1, 1);

        btn_use_cancel = new QPushButton(widget);
        btn_use_cancel->setObjectName("btn_use_cancel");
        btn_use_cancel->setFont(font);

        gridLayout->addWidget(btn_use_cancel, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 3, 0, 1, 3);


        retranslateUi(dlg_adduser);

        QMetaObject::connectSlotsByName(dlg_adduser);
    } // setupUi

    void retranslateUi(QDialog *dlg_adduser)
    {
        dlg_adduser->setWindowTitle(QCoreApplication::translate("dlg_adduser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dlg_adduser", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("dlg_adduser", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("dlg_adduser", "\346\235\203\351\231\220", nullptr));
        btn_user_save->setText(QCoreApplication::translate("dlg_adduser", "\344\277\235\345\255\230", nullptr));
        btn_use_cancel->setText(QCoreApplication::translate("dlg_adduser", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_adduser: public Ui_dlg_adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDUSER_H
