/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QLineEdit *MesglineEdit;
    QPushButton *SendButton;
    QPushButton *ClearButton;
    QPushButton *CloseButton;

    void setupUi(QWidget *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QStringLiteral("chat"));
        chat->resize(545, 348);
        MesglineEdit = new QLineEdit(chat);
        MesglineEdit->setObjectName(QStringLiteral("MesglineEdit"));
        MesglineEdit->setGeometry(QRect(100, 90, 301, 131));
        SendButton = new QPushButton(chat);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(80, 260, 93, 28));
        ClearButton = new QPushButton(chat);
        ClearButton->setObjectName(QStringLiteral("ClearButton"));
        ClearButton->setGeometry(QRect(330, 260, 93, 28));
        CloseButton = new QPushButton(chat);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));
        CloseButton->setGeometry(QRect(450, 17, 61, 61));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QWidget *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Form", Q_NULLPTR));
        SendButton->setText(QApplication::translate("chat", "\345\217\221\351\200\201", Q_NULLPTR));
        ClearButton->setText(QApplication::translate("chat", "\346\270\205\347\251\272", Q_NULLPTR));
        CloseButton->setText(QApplication::translate("chat", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
