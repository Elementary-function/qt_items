/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *ConnectButton;
    QPushButton *CloseButton;
    QLineEdit *iplineEdit;
    QLineEdit *PortlineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(528, 461);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 191, 81));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 141, 51));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 230, 121, 41));
        ConnectButton = new QPushButton(Widget);
        ConnectButton->setObjectName(QStringLiteral("ConnectButton"));
        ConnectButton->setGeometry(QRect(30, 320, 93, 28));
        CloseButton = new QPushButton(Widget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));
        CloseButton->setGeometry(QRect(320, 320, 93, 28));
        iplineEdit = new QLineEdit(Widget);
        iplineEdit->setObjectName(QStringLiteral("iplineEdit"));
        iplineEdit->setGeometry(QRect(220, 160, 161, 41));
        PortlineEdit = new QLineEdit(Widget);
        PortlineEdit->setObjectName(QStringLiteral("PortlineEdit"));
        PortlineEdit->setGeometry(QRect(220, 220, 161, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">TCP\345\256\242\346\210\267\347\253\257</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243</span></p></body></html>", Q_NULLPTR));
        ConnectButton->setText(QApplication::translate("Widget", "\350\277\236\346\216\245", Q_NULLPTR));
        CloseButton->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
