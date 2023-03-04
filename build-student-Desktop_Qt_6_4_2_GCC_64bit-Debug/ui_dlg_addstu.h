/********************************************************************************
** Form generated from reading UI file 'dlg_addstu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDSTU_H
#define UI_DLG_ADDSTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_AddStu
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *le_stuid;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *le_wechat;
    QLabel *label_7;
    QLineEdit *le_class;
    QLineEdit *le_name;
    QLineEdit *le_grade;
    QLabel *label_5;
    QLineEdit *le_phone;
    QLabel *label_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_save;
    QPushButton *btn_cancel;
    QSpinBox *sb_age;

    void setupUi(QDialog *Dlg_AddStu)
    {
        if (Dlg_AddStu->objectName().isEmpty())
            Dlg_AddStu->setObjectName("Dlg_AddStu");
        Dlg_AddStu->resize(531, 382);
        Dlg_AddStu->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(Dlg_AddStu);
        gridLayout_2->setSpacing(9);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(9, 9, 9, 9);
        le_stuid = new QLineEdit(Dlg_AddStu);
        le_stuid->setObjectName("le_stuid");

        gridLayout_2->addWidget(le_stuid, 4, 1, 1, 2);

        label_3 = new QLabel(Dlg_AddStu);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_6 = new QLabel(Dlg_AddStu);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        label = new QLabel(Dlg_AddStu);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_wechat = new QLineEdit(Dlg_AddStu);
        le_wechat->setObjectName("le_wechat");

        gridLayout_2->addWidget(le_wechat, 6, 1, 1, 2);

        label_7 = new QLabel(Dlg_AddStu);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 6, 0, 1, 1);

        le_class = new QLineEdit(Dlg_AddStu);
        le_class->setObjectName("le_class");

        gridLayout_2->addWidget(le_class, 3, 1, 1, 2);

        le_name = new QLineEdit(Dlg_AddStu);
        le_name->setObjectName("le_name");

        gridLayout_2->addWidget(le_name, 0, 1, 1, 2);

        le_grade = new QLineEdit(Dlg_AddStu);
        le_grade->setObjectName("le_grade");

        gridLayout_2->addWidget(le_grade, 2, 1, 1, 2);

        label_5 = new QLabel(Dlg_AddStu);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        le_phone = new QLineEdit(Dlg_AddStu);
        le_phone->setObjectName("le_phone");

        gridLayout_2->addWidget(le_phone, 5, 1, 1, 2);

        label_4 = new QLabel(Dlg_AddStu);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(Dlg_AddStu);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(94, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        widget = new QWidget(Dlg_AddStu);
        widget->setObjectName("widget");
        widget->setAutoFillBackground(true);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        btn_save = new QPushButton(widget);
        btn_save->setObjectName("btn_save");
        btn_save->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btn_save, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 7, 0, 1, 4);

        sb_age = new QSpinBox(Dlg_AddStu);
        sb_age->setObjectName("sb_age");
        sb_age->setMinimum(16);
        sb_age->setMaximum(35);
        sb_age->setValue(16);

        gridLayout_2->addWidget(sb_age, 1, 1, 1, 2);

        QWidget::setTabOrder(le_name, sb_age);
        QWidget::setTabOrder(sb_age, le_grade);
        QWidget::setTabOrder(le_grade, le_class);
        QWidget::setTabOrder(le_class, le_stuid);
        QWidget::setTabOrder(le_stuid, le_phone);
        QWidget::setTabOrder(le_phone, le_wechat);
        QWidget::setTabOrder(le_wechat, btn_save);
        QWidget::setTabOrder(btn_save, btn_cancel);

        retranslateUi(Dlg_AddStu);

        QMetaObject::connectSlotsByName(Dlg_AddStu);
    } // setupUi

    void retranslateUi(QDialog *Dlg_AddStu)
    {
        Dlg_AddStu->setWindowTitle(QCoreApplication::translate("Dlg_AddStu", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_AddStu", "\345\271\264\347\272\247", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_AddStu", "\347\224\265\350\257\235", nullptr));
        label->setText(QCoreApplication::translate("Dlg_AddStu", "\345\247\223\345\220\215", nullptr));
        label_7->setText(QCoreApplication::translate("Dlg_AddStu", "\345\276\256\344\277\241", nullptr));
        label_5->setText(QCoreApplication::translate("Dlg_AddStu", "\345\255\246\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_AddStu", "\347\217\255\347\272\247", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_AddStu", "\345\271\264\351\276\204", nullptr));
        btn_save->setText(QCoreApplication::translate("Dlg_AddStu", "\344\277\235\345\255\230", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Dlg_AddStu", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_AddStu: public Ui_Dlg_AddStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDSTU_H
