/********************************************************************************
** Form generated from reading UI file 'dialog_score.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SCORE_H
#define UI_DIALOG_SCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog_score
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_showscore;
    QLabel *label_bg;
    QLabel *label_2;

    void setupUi(QDialog *dialog_score)
    {
        if (dialog_score->objectName().isEmpty())
            dialog_score->setObjectName(QStringLiteral("dialog_score"));
        dialog_score->resize(400, 300);
        dialog_score->setMinimumSize(QSize(400, 300));
        dialog_score->setMaximumSize(QSize(400, 300));
        dialog_score->setAutoFillBackground(false);
        dialog_score->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(dialog_score);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 240, 111, 41));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("color: rgb(96, 116, 94);"));
        label = new QLabel(dialog_score);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 321, 101));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("color: rgb(78, 97, 69);\n"
""));
        label->setTextFormat(Qt::AutoText);
        label->setTextInteractionFlags(Qt::NoTextInteraction);
        label_showscore = new QLabel(dialog_score);
        label_showscore->setObjectName(QStringLiteral("label_showscore"));
        label_showscore->setGeometry(QRect(130, 120, 131, 91));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\200\235\346\272\220\351\273\221\351\253\224 Medium"));
        font2.setPointSize(40);
        label_showscore->setFont(font2);
        label_showscore->setAutoFillBackground(false);
        label_showscore->setStyleSheet(QStringLiteral("color: rgb(87, 106, 86);"));
        label_showscore->setAlignment(Qt::AlignCenter);
        label_showscore->setTextInteractionFlags(Qt::NoTextInteraction);
        label_bg = new QLabel(dialog_score);
        label_bg->setObjectName(QStringLiteral("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 401, 301));
        label_bg->setPixmap(QPixmap(QString::fromUtf8(":/images/giphy5.gif")));
        label_2 = new QLabel(dialog_score);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 20, 401, 211));
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(250, 250, 250, 197));"));
        label_bg->raise();
        label_2->raise();
        pushButton->raise();
        label->raise();
        label_showscore->raise();

        retranslateUi(dialog_score);

        QMetaObject::connectSlotsByName(dialog_score);
    } // setupUi

    void retranslateUi(QDialog *dialog_score)
    {
        dialog_score->setWindowTitle(QApplication::translate("dialog_score", "GOOD JOB", 0));
        pushButton->setText(QApplication::translate("dialog_score", "OK", 0));
        label->setText(QApplication::translate("dialog_score", "Thanks <3 my planet eater,\n"
"your score:", 0));
        label_showscore->setText(QString());
        label_bg->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dialog_score: public Ui_dialog_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SCORE_H
