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
    QPushButton *StartButton;
    QPushButton *StopButton;
    QLabel *Showlabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(496, 631);
        StartButton = new QPushButton(Widget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(70, 570, 93, 28));
        StopButton = new QPushButton(Widget);
        StopButton->setObjectName(QStringLiteral("StopButton"));
        StopButton->setGeometry(QRect(310, 570, 93, 28));
        Showlabel = new QLabel(Widget);
        Showlabel->setObjectName(QStringLiteral("Showlabel"));
        Showlabel->setGeometry(QRect(80, 20, 311, 511));
        Showlabel->setScaledContents(true);
        Showlabel->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        StartButton->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        StopButton->setText(QApplication::translate("Widget", "\346\232\202\345\201\234", Q_NULLPTR));
        Showlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
