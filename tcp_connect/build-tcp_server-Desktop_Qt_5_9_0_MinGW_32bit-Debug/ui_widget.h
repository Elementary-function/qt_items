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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *IplineEdit;
    QLineEdit *PortlineEdit;
    QLineEdit *MesglineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(693, 501);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 30, 171, 61));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 130, 131, 41));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 210, 141, 41));
        IplineEdit = new QLineEdit(Widget);
        IplineEdit->setObjectName(QStringLiteral("IplineEdit"));
        IplineEdit->setGeometry(QRect(320, 130, 171, 41));
        PortlineEdit = new QLineEdit(Widget);
        PortlineEdit->setObjectName(QStringLiteral("PortlineEdit"));
        PortlineEdit->setGeometry(QRect(320, 210, 171, 41));
        MesglineEdit = new QLineEdit(Widget);
        MesglineEdit->setObjectName(QStringLiteral("MesglineEdit"));
        MesglineEdit->setGeometry(QRect(180, 310, 301, 91));
        MesglineEdit->setInputMask(QStringLiteral(""));
        MesglineEdit->setText(QStringLiteral(""));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">TCP\346\234\215\345\212\241\345\231\250</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\345\256\242\346\210\267\347\253\257\345\234\260\345\235\200</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\345\256\242\346\210\267\347\253\257\347\253\257\345\217\243</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
