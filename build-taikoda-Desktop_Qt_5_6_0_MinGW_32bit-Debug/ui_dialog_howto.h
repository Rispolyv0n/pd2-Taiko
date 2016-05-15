/********************************************************************************
** Form generated from reading UI file 'dialog_howto.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HOWTO_H
#define UI_DIALOG_HOWTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog_howto
{
public:
    QLabel *label_bg;
    QLabel *label_panel;
    QLabel *label_instruction;
    QPushButton *pushButton;

    void setupUi(QDialog *dialog_howto)
    {
        if (dialog_howto->objectName().isEmpty())
            dialog_howto->setObjectName(QStringLiteral("dialog_howto"));
        dialog_howto->resize(436, 357);
        dialog_howto->setMinimumSize(QSize(436, 357));
        dialog_howto->setMaximumSize(QSize(436, 357));
        label_bg = new QLabel(dialog_howto);
        label_bg->setObjectName(QStringLiteral("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 441, 361));
        label_bg->setPixmap(QPixmap(QString::fromUtf8(":/images/giphy5.gif")));
        label_panel = new QLabel(dialog_howto);
        label_panel->setObjectName(QStringLiteral("label_panel"));
        label_panel->setGeometry(QRect(-3, 24, 441, 291));
        label_panel->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(250, 250, 250, 197));"));
        label_instruction = new QLabel(dialog_howto);
        label_instruction->setObjectName(QStringLiteral("label_instruction"));
        label_instruction->setGeometry(QRect(50, 20, 361, 291));
        label_instruction->setMinimumSize(QSize(321, 291));
        label_instruction->setMaximumSize(QSize(1000, 1000));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_instruction->setFont(font);
        label_instruction->setStyleSheet(QStringLiteral("color: rgb(86, 126, 86);"));
        label_instruction->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton = new QPushButton(dialog_howto);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 320, 111, 28));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral("color: rgb(77, 102, 72);"));

        retranslateUi(dialog_howto);

        QMetaObject::connectSlotsByName(dialog_howto);
    } // setupUi

    void retranslateUi(QDialog *dialog_howto)
    {
        dialog_howto->setWindowTitle(QApplication::translate("dialog_howto", "How to Play", 0));
        label_bg->setText(QString());
        label_panel->setText(QString());
        label_instruction->setText(QApplication::translate("dialog_howto", "How To Play:\n"
"Be my planet eater!\n"
"Eat the Tangerine Planet -> press L\n"
"Eat the Mint Planet -> press R\n"
"\n"
"The closer the planet is\n"
"to the black vertical line,\n"
"the higher score you get.\n"
"The game ends after 30 seconds,\n"
"good luck my planet eater <3", 0));
        pushButton->setText(QApplication::translate("dialog_howto", "Got it!", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_howto: public Ui_dialog_howto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HOWTO_H
