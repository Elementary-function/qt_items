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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *mainlabel;
    QPushButton *StartButton;
    QPushButton *OnceButton;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(685, 499);
        mainlabel = new QLabel(Widget);
        mainlabel->setObjectName(QStringLiteral("mainlabel"));
        mainlabel->setGeometry(QRect(170, 10, 301, 391));
        StartButton = new QPushButton(Widget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(50, 410, 93, 28));
        OnceButton = new QPushButton(Widget);
        OnceButton->setObjectName(QStringLiteral("OnceButton"));
        OnceButton->setGeometry(QRect(270, 410, 93, 28));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 410, 93, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        mainlabel->setText(QString());
        StartButton->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        OnceButton->setText(QApplication::translate("Widget", "\345\215\225\346\254\241", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\346\232\202\345\201\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
