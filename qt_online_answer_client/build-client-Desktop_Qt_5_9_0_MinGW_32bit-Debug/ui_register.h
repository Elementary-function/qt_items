/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UserlineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PasswdlineEdit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *RegisterButton;
    QPushButton *BackButton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(613, 506);
        label_3 = new QLabel(Register);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 60, 191, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_3->setFont(font);
        widget = new QWidget(Register);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 140, 391, 171));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(16);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        UserlineEdit = new QLineEdit(widget);
        UserlineEdit->setObjectName(QStringLiteral("UserlineEdit"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(14);
        UserlineEdit->setFont(font2);

        horizontalLayout->addWidget(UserlineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        PasswdlineEdit = new QLineEdit(widget);
        PasswdlineEdit->setObjectName(QStringLiteral("PasswdlineEdit"));
        PasswdlineEdit->setFont(font2);
        PasswdlineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(PasswdlineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        RegisterButton = new QPushButton(widget);
        RegisterButton->setObjectName(QStringLiteral("RegisterButton"));

        verticalLayout->addWidget(RegisterButton);

        BackButton = new QPushButton(widget);
        BackButton->setObjectName(QStringLiteral("BackButton"));

        verticalLayout->addWidget(BackButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("Register", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\346\263\250\345\206\214\347\225\214\351\235\242</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Register", "<html><head/><body><p align=\"center\">\347\224\250\346\210\267\345\220\215\357\274\232</p></body></html>", Q_NULLPTR));
        UserlineEdit->setText(QString());
        label_2->setText(QApplication::translate("Register", "\345\257\206  \347\240\201\357\274\232", Q_NULLPTR));
        RegisterButton->setText(QApplication::translate("Register", "\347\253\213\345\215\263\346\263\250\345\206\214", Q_NULLPTR));
        BackButton->setText(QApplication::translate("Register", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
