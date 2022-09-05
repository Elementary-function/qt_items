/********************************************************************************
** Form generated from reading UI file 'training.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINING_H
#define UI_TRAINING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_training
{
public:
    QStackedWidget *stackedWidget;
    QWidget *mainMenu;
    QPushButton *rankButton;
    QPushButton *singleButton;
    QWidget *single_menu;
    QPushButton *single_start;
    QPushButton *single_back;
    QLabel *label;
    QLabel *label_2;
    QWidget *single_running;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QSpacerItem *verticalSpacer;
    QLabel *single_question;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *single_SelectButton_one;
    QPushButton *single_SelectButton_two;
    QPushButton *single_SelectButton_three;
    QPushButton *single_SelectButton_four;
    QSpacerItem *verticalSpacer_4;
    QWidget *single_score;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_6;
    QLabel *single_Result;
    QSpacerItem *verticalSpacer_5;
    QLabel *single_Result_Score;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QPushButton *singnal_score_backButton;
    QWidget *rank_wait;
    QLabel *label_3;
    QWidget *rank_running;
    QWidget *widget;
    QLabel *enemyScore;
    QLabel *selfScore;
    QLCDNumber *lcdNumber_2;
    QWidget *widget_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *rankSelectButton1;
    QPushButton *rankSelectButton2;
    QPushButton *rankSelectButton3;
    QPushButton *rankSelectButton4;
    QLabel *rankQuestion;
    QWidget *rank_Result;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_11;
    QLabel *RankResult;
    QLabel *NewRank;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QDialog *training)
    {
        if (training->objectName().isEmpty())
            training->setObjectName(QStringLiteral("training"));
        training->resize(483, 715);
        stackedWidget = new QStackedWidget(training);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 10, 481, 691));
        mainMenu = new QWidget();
        mainMenu->setObjectName(QStringLiteral("mainMenu"));
        rankButton = new QPushButton(mainMenu);
        rankButton->setObjectName(QStringLiteral("rankButton"));
        rankButton->setGeometry(QRect(80, 70, 281, 51));
        singleButton = new QPushButton(mainMenu);
        singleButton->setObjectName(QStringLiteral("singleButton"));
        singleButton->setGeometry(QRect(80, 180, 281, 51));
        stackedWidget->addWidget(mainMenu);
        single_menu = new QWidget();
        single_menu->setObjectName(QStringLiteral("single_menu"));
        single_start = new QPushButton(single_menu);
        single_start->setObjectName(QStringLiteral("single_start"));
        single_start->setGeometry(QRect(150, 530, 141, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        single_start->setFont(font);
        single_back = new QPushButton(single_menu);
        single_back->setObjectName(QStringLiteral("single_back"));
        single_back->setGeometry(QRect(150, 600, 141, 41));
        single_back->setFont(font);
        label = new QLabel(single_menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 150, 301, 171));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        label->setFont(font1);
        label_2 = new QLabel(single_menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 260, 211, 71));
        stackedWidget->addWidget(single_menu);
        single_running = new QWidget();
        single_running->setObjectName(QStringLiteral("single_running"));
        layoutWidget = new QWidget(single_running);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 451, 661));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(100, 100));
        lcdNumber->setMaximumSize(QSize(500, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(20);
        lcdNumber->setFont(font2);

        verticalLayout->addWidget(lcdNumber);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        single_question = new QLabel(layoutWidget);
        single_question->setObjectName(QStringLiteral("single_question"));
        single_question->setMinimumSize(QSize(0, 200));
        single_question->setMaximumSize(QSize(500, 300));
        single_question->setSizeIncrement(QSize(0, 0));
        single_question->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(single_question);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        single_SelectButton_one = new QPushButton(layoutWidget);
        single_SelectButton_one->setObjectName(QStringLiteral("single_SelectButton_one"));

        verticalLayout->addWidget(single_SelectButton_one);

        single_SelectButton_two = new QPushButton(layoutWidget);
        single_SelectButton_two->setObjectName(QStringLiteral("single_SelectButton_two"));

        verticalLayout->addWidget(single_SelectButton_two);

        single_SelectButton_three = new QPushButton(layoutWidget);
        single_SelectButton_three->setObjectName(QStringLiteral("single_SelectButton_three"));

        verticalLayout->addWidget(single_SelectButton_three);

        single_SelectButton_four = new QPushButton(layoutWidget);
        single_SelectButton_four->setObjectName(QStringLiteral("single_SelectButton_four"));

        verticalLayout->addWidget(single_SelectButton_four);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        stackedWidget->addWidget(single_running);
        single_score = new QWidget();
        single_score->setObjectName(QStringLiteral("single_score"));
        layoutWidget1 = new QWidget(single_score);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 461, 681));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        single_Result = new QLabel(layoutWidget1);
        single_Result->setObjectName(QStringLiteral("single_Result"));
        single_Result->setMinimumSize(QSize(0, 150));
        single_Result->setSizeIncrement(QSize(0, 150));

        verticalLayout_2->addWidget(single_Result);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        single_Result_Score = new QLabel(layoutWidget1);
        single_Result_Score->setObjectName(QStringLiteral("single_Result_Score"));
        single_Result_Score->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(single_Result_Score);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        singnal_score_backButton = new QPushButton(layoutWidget1);
        singnal_score_backButton->setObjectName(QStringLiteral("singnal_score_backButton"));

        verticalLayout_2->addWidget(singnal_score_backButton);

        stackedWidget->addWidget(single_score);
        rank_wait = new QWidget();
        rank_wait->setObjectName(QStringLiteral("rank_wait"));
        label_3 = new QLabel(rank_wait);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 451, 231));
        stackedWidget->addWidget(rank_wait);
        rank_running = new QWidget();
        rank_running->setObjectName(QStringLiteral("rank_running"));
        widget = new QWidget(rank_running);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 10, 331, 81));
        enemyScore = new QLabel(widget);
        enemyScore->setObjectName(QStringLiteral("enemyScore"));
        enemyScore->setGeometry(QRect(0, 0, 241, 41));
        selfScore = new QLabel(widget);
        selfScore->setObjectName(QStringLiteral("selfScore"));
        selfScore->setGeometry(QRect(0, 45, 251, 31));
        lcdNumber_2 = new QLCDNumber(widget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(250, 0, 81, 81));
        widget_2 = new QWidget(rank_running);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 390, 481, 311));
        layoutWidget2 = new QWidget(widget_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 20, 481, 281));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        rankSelectButton1 = new QPushButton(layoutWidget2);
        rankSelectButton1->setObjectName(QStringLiteral("rankSelectButton1"));

        verticalLayout_3->addWidget(rankSelectButton1);

        rankSelectButton2 = new QPushButton(layoutWidget2);
        rankSelectButton2->setObjectName(QStringLiteral("rankSelectButton2"));

        verticalLayout_3->addWidget(rankSelectButton2);

        rankSelectButton3 = new QPushButton(layoutWidget2);
        rankSelectButton3->setObjectName(QStringLiteral("rankSelectButton3"));

        verticalLayout_3->addWidget(rankSelectButton3);

        rankSelectButton4 = new QPushButton(layoutWidget2);
        rankSelectButton4->setObjectName(QStringLiteral("rankSelectButton4"));

        verticalLayout_3->addWidget(rankSelectButton4);

        rankQuestion = new QLabel(rank_running);
        rankQuestion->setObjectName(QStringLiteral("rankQuestion"));
        rankQuestion->setGeometry(QRect(10, 140, 461, 251));
        stackedWidget->addWidget(rank_running);
        rank_Result = new QWidget();
        rank_Result->setObjectName(QStringLiteral("rank_Result"));
        layoutWidget3 = new QWidget(rank_Result);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 481, 681));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);

        RankResult = new QLabel(layoutWidget3);
        RankResult->setObjectName(QStringLiteral("RankResult"));

        verticalLayout_4->addWidget(RankResult);

        NewRank = new QLabel(layoutWidget3);
        NewRank->setObjectName(QStringLiteral("NewRank"));

        verticalLayout_4->addWidget(NewRank);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_12);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_10);

        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        stackedWidget->addWidget(rank_Result);

        retranslateUi(training);

        QMetaObject::connectSlotsByName(training);
    } // setupUi

    void retranslateUi(QDialog *training)
    {
        training->setWindowTitle(QApplication::translate("training", "Dialog", Q_NULLPTR));
        rankButton->setText(QApplication::translate("training", "\346\216\222\344\275\215\350\265\233", Q_NULLPTR));
        singleButton->setText(QApplication::translate("training", "\344\270\252\344\272\272\350\256\255\347\273\203", Q_NULLPTR));
        single_start->setText(QApplication::translate("training", "\345\274\200\345\247\213\347\255\224\351\242\230", Q_NULLPTR));
        single_back->setText(QApplication::translate("training", "\350\277\224\345\233\236", Q_NULLPTR));
        label->setText(QApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\350\277\236\347\273\255\347\255\224\345\257\2715\351\201\223\351\242\230</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\255\224\351\224\231\347\246\273\345\274\200\357\274\214\347\255\224\345\257\271\347\273\247\347\273\255</span></p></body></html>", Q_NULLPTR));
        single_question->setText(QApplication::translate("training", "questin", Q_NULLPTR));
        single_SelectButton_one->setText(QApplication::translate("training", "PushButton", Q_NULLPTR));
        single_SelectButton_two->setText(QApplication::translate("training", "PushButton", Q_NULLPTR));
        single_SelectButton_three->setText(QApplication::translate("training", "PushButton", Q_NULLPTR));
        single_SelectButton_four->setText(QApplication::translate("training", "PushButton", Q_NULLPTR));
        single_Result->setText(QApplication::translate("training", "\346\210\220\345\212\237\344\270\216\345\220\246", Q_NULLPTR));
        single_Result_Score->setText(QApplication::translate("training", "\345\276\227\345\210\206", Q_NULLPTR));
        singnal_score_backButton->setText(QApplication::translate("training", "\350\277\224\345\233\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; font-weight:600;\">\346\255\243\345\234\250\345\214\271\351\205\215\345\257\271\346\211\213\342\200\246\342\200\246</span></p></body></html>", Q_NULLPTR));
        enemyScore->setText(QApplication::translate("training", "\347\216\213\345\255\220 \346\256\265\344\275\215\357\274\232\351\273\204\351\207\2211 1\351\242\227\346\230\237 160\345\210\206", Q_NULLPTR));
        selfScore->setText(QApplication::translate("training", "\347\201\260\344\272\214 \346\256\265\344\275\215\357\274\232\347\231\275\351\223\2662 2\351\242\227\346\230\237 100\345\210\206", Q_NULLPTR));
        rankSelectButton1->setText(QApplication::translate("training", "PushButton", Q_NULLPTR));
        rankSelectButton2->setText(QApplication::translate("training", "PushButton", Q_NULLPTR));
        rankSelectButton3->setText(QApplication::translate("training", "PushButton", Q_NULLPTR));
        rankSelectButton4->setText(QApplication::translate("training", "PushButton", Q_NULLPTR));
        rankQuestion->setText(QApplication::translate("training", "<html><head/><body><p><span style=\" font-size:16pt;\">\351\242\230\347\233\256</span></p></body></html>", Q_NULLPTR));
        RankResult->setText(QApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">\345\244\261\350\264\245</span></p></body></html>", Q_NULLPTR));
        NewRank->setText(QApplication::translate("training", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\351\273\204\351\207\2211 2\351\242\227\346\230\237 --&gt; \351\273\204\351\207\2211 3\351\242\227\346\230\237</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("training", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class training: public Ui_training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINING_H
