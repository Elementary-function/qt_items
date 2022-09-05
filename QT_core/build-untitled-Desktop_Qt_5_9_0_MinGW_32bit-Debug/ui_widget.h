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
    QLabel *infolabel;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *commitButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *browesButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(423, 237);
        infolabel = new QLabel(Widget);
        infolabel->setObjectName(QStringLiteral("infolabel"));
        infolabel->setGeometry(QRect(130, 10, 141, 51));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 91, 51));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 80, 141, 31));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 130, 401, 91));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commitButton = new QPushButton(layoutWidget);
        commitButton->setObjectName(QStringLiteral("commitButton"));

        horizontalLayout->addWidget(commitButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        browesButton = new QPushButton(layoutWidget);
        browesButton->setObjectName(QStringLiteral("browesButton"));

        horizontalLayout->addWidget(browesButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        infolabel->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\345\221\275\345\220\215\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\211\223\345\274\200</span></p></body></html>", Q_NULLPTR));
        commitButton->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", Q_NULLPTR));
        browesButton->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
