/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UserlineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PasswdlineEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *StartButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *RegisterButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(491, 406);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 10, 251, 131));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        label_3->setFont(font);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 130, 360, 33));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
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

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(60, 180, 360, 32));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        PasswdlineEdit = new QLineEdit(widget1);
        PasswdlineEdit->setObjectName(QStringLiteral("PasswdlineEdit"));
        PasswdlineEdit->setFont(font2);
        PasswdlineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(PasswdlineEdit);

        widget2 = new QWidget(Widget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(40, 220, 401, 111));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        StartButton = new QPushButton(widget2);
        StartButton->setObjectName(QStringLiteral("StartButton"));

        horizontalLayout_3->addWidget(StartButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        RegisterButton = new QPushButton(widget2);
        RegisterButton->setObjectName(QStringLiteral("RegisterButton"));

        horizontalLayout_3->addWidget(RegisterButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\345\256\242\346\210\267\347\253\257</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\">\347\224\250\346\210\267\345\220\215\357\274\232</p></body></html>", Q_NULLPTR));
        UserlineEdit->setText(QString());
        label_2->setText(QApplication::translate("Widget", "\345\257\206  \347\240\201\357\274\232", Q_NULLPTR));
        StartButton->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", Q_NULLPTR));
        RegisterButton->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
