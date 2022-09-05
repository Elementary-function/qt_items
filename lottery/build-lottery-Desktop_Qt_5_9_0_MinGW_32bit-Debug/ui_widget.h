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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *StartButton;
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *Listlabel;
    QPushButton *CloseButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(856, 554);
        StartButton = new QPushButton(Widget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(300, 370, 171, 51));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 60, 141, 81));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(50, 220, 141, 201));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 190, 72, 15));
        Listlabel = new QLabel(Widget);
        Listlabel->setObjectName(QStringLiteral("Listlabel"));
        Listlabel->setGeometry(QRect(220, 90, 321, 231));
        Listlabel->setAlignment(Qt::AlignCenter);
        CloseButton = new QPushButton(Widget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));
        CloseButton->setGeometry(QRect(580, 40, 61, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        StartButton->setText(QString());
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">\346\212\275\345\245\226\357\274\201\346\212\275\345\245\226\357\274\201</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\350\216\267\345\245\226\345\220\215\345\215\225", Q_NULLPTR));
        Listlabel->setText(QString());
        CloseButton->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
