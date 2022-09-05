/********************************************************************************
** Form generated from reading UI file 'gammingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMMINGWIDGET_H
#define UI_GAMMINGWIDGET_H

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

class Ui_gammingwidget
{
public:
    QPushButton *DownButton;
    QPushButton *UpButton;
    QPushButton *LeftpushButton;
    QPushButton *RightButton;
    QPushButton *QuitButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ScorelineEdit;
    QLineEdit *LevellineEdit;

    void setupUi(QWidget *gammingwidget)
    {
        if (gammingwidget->objectName().isEmpty())
            gammingwidget->setObjectName(QStringLiteral("gammingwidget"));
        gammingwidget->resize(904, 601);
        DownButton = new QPushButton(gammingwidget);
        DownButton->setObjectName(QStringLiteral("DownButton"));
        DownButton->setGeometry(QRect(660, 370, 61, 61));
        UpButton = new QPushButton(gammingwidget);
        UpButton->setObjectName(QStringLiteral("UpButton"));
        UpButton->setGeometry(QRect(660, 250, 61, 61));
        LeftpushButton = new QPushButton(gammingwidget);
        LeftpushButton->setObjectName(QStringLiteral("LeftpushButton"));
        LeftpushButton->setGeometry(QRect(600, 310, 61, 61));
        RightButton = new QPushButton(gammingwidget);
        RightButton->setObjectName(QStringLiteral("RightButton"));
        RightButton->setGeometry(QRect(720, 310, 61, 61));
        QuitButton = new QPushButton(gammingwidget);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));
        QuitButton->setGeometry(QRect(770, 490, 71, 71));
        label = new QLabel(gammingwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(620, 30, 91, 31));
        label_2 = new QLabel(gammingwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(620, 80, 91, 61));
        ScorelineEdit = new QLineEdit(gammingwidget);
        ScorelineEdit->setObjectName(QStringLiteral("ScorelineEdit"));
        ScorelineEdit->setGeometry(QRect(720, 30, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        ScorelineEdit->setFont(font);
        LevellineEdit = new QLineEdit(gammingwidget);
        LevellineEdit->setObjectName(QStringLiteral("LevellineEdit"));
        LevellineEdit->setGeometry(QRect(720, 90, 121, 31));
        LevellineEdit->setFont(font);
        LevellineEdit->setText(QStringLiteral("     1"));
        LevellineEdit->setFrame(false);

        retranslateUi(gammingwidget);

        QMetaObject::connectSlotsByName(gammingwidget);
    } // setupUi

    void retranslateUi(QWidget *gammingwidget)
    {
        gammingwidget->setWindowTitle(QApplication::translate("gammingwidget", "Form", Q_NULLPTR));
        DownButton->setText(QApplication::translate("gammingwidget", "\342\206\223", Q_NULLPTR));
        UpButton->setText(QApplication::translate("gammingwidget", "\342\206\221", Q_NULLPTR));
        LeftpushButton->setText(QApplication::translate("gammingwidget", "\342\206\220", Q_NULLPTR));
        RightButton->setText(QApplication::translate("gammingwidget", "\342\206\222", Q_NULLPTR));
        QuitButton->setText(QApplication::translate("gammingwidget", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("gammingwidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\345\276\227\345\210\206</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("gammingwidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\347\255\211\347\272\247</span></p></body></html>", Q_NULLPTR));
        ScorelineEdit->setText(QApplication::translate("gammingwidget", "     0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gammingwidget: public Ui_gammingwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMMINGWIDGET_H
