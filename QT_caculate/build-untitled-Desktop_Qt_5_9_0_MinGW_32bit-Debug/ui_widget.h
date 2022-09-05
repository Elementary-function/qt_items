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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *ClearButton;
    QPushButton *PlusButton;
    QPushButton *SubButton;
    QPushButton *ChopButton;
    QPushButton *OneButton;
    QPushButton *TwoButton;
    QPushButton *ThreeButton;
    QPushButton *MulButton;
    QPushButton *FourButton;
    QPushButton *FiveButton;
    QPushButton *SixButton;
    QPushButton *DivButton;
    QPushButton *SevenButton;
    QPushButton *EightButton;
    QPushButton *NineButton;
    QPushButton *EqualButton;
    QPushButton *LeftButton;
    QPushButton *ZeroButton;
    QPushButton *RightButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(283, 382);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 221, 41));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 60, 223, 280));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        ClearButton = new QPushButton(widget);
        ClearButton->setObjectName(QStringLiteral("ClearButton"));
        ClearButton->setMinimumSize(QSize(50, 50));
        ClearButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(ClearButton, 0, 0, 1, 1);

        PlusButton = new QPushButton(widget);
        PlusButton->setObjectName(QStringLiteral("PlusButton"));
        PlusButton->setMinimumSize(QSize(50, 50));
        PlusButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(PlusButton, 0, 1, 1, 1);

        SubButton = new QPushButton(widget);
        SubButton->setObjectName(QStringLiteral("SubButton"));
        SubButton->setMinimumSize(QSize(50, 50));
        SubButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(SubButton, 0, 2, 1, 1);

        ChopButton = new QPushButton(widget);
        ChopButton->setObjectName(QStringLiteral("ChopButton"));
        ChopButton->setMinimumSize(QSize(50, 50));
        ChopButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(ChopButton, 0, 3, 1, 1);

        OneButton = new QPushButton(widget);
        OneButton->setObjectName(QStringLiteral("OneButton"));
        OneButton->setMinimumSize(QSize(50, 50));
        OneButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(OneButton, 1, 0, 1, 1);

        TwoButton = new QPushButton(widget);
        TwoButton->setObjectName(QStringLiteral("TwoButton"));
        TwoButton->setMinimumSize(QSize(50, 50));
        TwoButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(TwoButton, 1, 1, 1, 1);

        ThreeButton = new QPushButton(widget);
        ThreeButton->setObjectName(QStringLiteral("ThreeButton"));
        ThreeButton->setMinimumSize(QSize(50, 50));
        ThreeButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(ThreeButton, 1, 2, 1, 1);

        MulButton = new QPushButton(widget);
        MulButton->setObjectName(QStringLiteral("MulButton"));
        MulButton->setMinimumSize(QSize(50, 50));
        MulButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(MulButton, 1, 3, 1, 1);

        FourButton = new QPushButton(widget);
        FourButton->setObjectName(QStringLiteral("FourButton"));
        FourButton->setMinimumSize(QSize(50, 50));
        FourButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(FourButton, 2, 0, 1, 1);

        FiveButton = new QPushButton(widget);
        FiveButton->setObjectName(QStringLiteral("FiveButton"));
        FiveButton->setMinimumSize(QSize(50, 50));
        FiveButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(FiveButton, 2, 1, 1, 1);

        SixButton = new QPushButton(widget);
        SixButton->setObjectName(QStringLiteral("SixButton"));
        SixButton->setMinimumSize(QSize(50, 50));
        SixButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(SixButton, 2, 2, 1, 1);

        DivButton = new QPushButton(widget);
        DivButton->setObjectName(QStringLiteral("DivButton"));
        DivButton->setMinimumSize(QSize(50, 50));
        DivButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(DivButton, 2, 3, 1, 1);

        SevenButton = new QPushButton(widget);
        SevenButton->setObjectName(QStringLiteral("SevenButton"));
        SevenButton->setMinimumSize(QSize(50, 50));
        SevenButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(SevenButton, 3, 0, 1, 1);

        EightButton = new QPushButton(widget);
        EightButton->setObjectName(QStringLiteral("EightButton"));
        EightButton->setMinimumSize(QSize(50, 50));
        EightButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(EightButton, 3, 1, 1, 1);

        NineButton = new QPushButton(widget);
        NineButton->setObjectName(QStringLiteral("NineButton"));
        NineButton->setMinimumSize(QSize(50, 50));
        NineButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(NineButton, 3, 2, 1, 1);

        EqualButton = new QPushButton(widget);
        EqualButton->setObjectName(QStringLiteral("EqualButton"));
        EqualButton->setMinimumSize(QSize(50, 50));
        EqualButton->setMaximumSize(QSize(50, 100));

        gridLayout->addWidget(EqualButton, 3, 3, 2, 1);

        LeftButton = new QPushButton(widget);
        LeftButton->setObjectName(QStringLiteral("LeftButton"));
        LeftButton->setMinimumSize(QSize(50, 50));
        LeftButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(LeftButton, 4, 0, 1, 1);

        ZeroButton = new QPushButton(widget);
        ZeroButton->setObjectName(QStringLiteral("ZeroButton"));
        ZeroButton->setMinimumSize(QSize(50, 50));
        ZeroButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(ZeroButton, 4, 1, 1, 1);

        RightButton = new QPushButton(widget);
        RightButton->setObjectName(QStringLiteral("RightButton"));
        RightButton->setMinimumSize(QSize(50, 50));
        RightButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(RightButton, 4, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        ClearButton->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        PlusButton->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        SubButton->setText(QApplication::translate("Widget", "-", Q_NULLPTR));
        ChopButton->setText(QString());
        OneButton->setText(QApplication::translate("Widget", "1", Q_NULLPTR));
        TwoButton->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        ThreeButton->setText(QApplication::translate("Widget", "3", Q_NULLPTR));
        MulButton->setText(QApplication::translate("Widget", "*", Q_NULLPTR));
        FourButton->setText(QApplication::translate("Widget", "4", Q_NULLPTR));
        FiveButton->setText(QApplication::translate("Widget", "5", Q_NULLPTR));
        SixButton->setText(QApplication::translate("Widget", "6", Q_NULLPTR));
        DivButton->setText(QApplication::translate("Widget", "/", Q_NULLPTR));
        SevenButton->setText(QApplication::translate("Widget", "7", Q_NULLPTR));
        EightButton->setText(QApplication::translate("Widget", "8", Q_NULLPTR));
        NineButton->setText(QApplication::translate("Widget", "9", Q_NULLPTR));
        EqualButton->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
        LeftButton->setText(QApplication::translate("Widget", "(", Q_NULLPTR));
        ZeroButton->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        RightButton->setText(QApplication::translate("Widget", ")", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
