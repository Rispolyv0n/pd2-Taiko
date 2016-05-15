/********************************************************************************
** Form generated from reading UI file 'dialogaboutris.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABOUTRIS_H
#define UI_DIALOGABOUTRIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogAboutris
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_bg;
    QLabel *label_3;

    void setupUi(QDialog *DialogAboutris)
    {
        if (DialogAboutris->objectName().isEmpty())
            DialogAboutris->setObjectName(QStringLiteral("DialogAboutris"));
        DialogAboutris->resize(400, 300);
        DialogAboutris->setMinimumSize(QSize(400, 300));
        DialogAboutris->setMaximumSize(QSize(400, 300));
        DialogAboutris->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(DialogAboutris);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 250, 141, 31));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("color: rgb(84, 99, 87);"));
        label = new QLabel(DialogAboutris);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 351, 201));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\200\235\346\272\220\351\273\221\351\253\224 Medium"));
        font1.setPointSize(10);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(81, 98, 69);"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        label->setTextInteractionFlags(Qt::NoTextInteraction);
        label_bg = new QLabel(DialogAboutris);
        label_bg->setObjectName(QStringLiteral("label_bg"));
        label_bg->setGeometry(QRect(0, 0, 401, 311));
        label_bg->setPixmap(QPixmap(QString::fromUtf8(":/images/giphy5.gif")));
        label_3 = new QLabel(DialogAboutris);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 30, 411, 201));
        label_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(250, 250, 250, 197));"));
        label_bg->raise();
        label_3->raise();
        pushButton->raise();
        label->raise();

        retranslateUi(DialogAboutris);

        QMetaObject::connectSlotsByName(DialogAboutris);
    } // setupUi

    void retranslateUi(QDialog *DialogAboutris)
    {
        DialogAboutris->setWindowTitle(QApplication::translate("DialogAboutris", "\351\227\234\346\226\274\344\275\234\350\200\205\350\220\214RIS", 0));
        pushButton->setText(QApplication::translate("DialogAboutris", "OK", 0));
        label->setText(QApplication::translate("DialogAboutris", "\351\227\234\346\226\274\344\275\234\350\200\205:\n"
"\n"
"\344\275\234\350\200\205\346\230\257\346\210\220\345\244\247\350\263\207\350\250\212\347\263\273108\347\232\204\345\260\217\345\244\245\344\274\264\n"
"\347\266\275\350\231\237RIS \345\255\270\350\231\237F74046234\n"
"\345\271\263\346\227\245\346\234\200\346\204\233\345\220\203\346\235\261\350\245\277\n"
"\346\257\217\345\244\251\346\231\232\344\270\212\346\234\200\346\204\233\345\234\250\346\270\233\350\202\245\344\270\255\347\232\204\345\256\244\345\217\213\346\227\201\351\202\212\351\226\213\351\233\266\351\243\237\345\214\205\350\243\235\n"
"\351\200\231\346\230\257\345\200\213\345\244\252\351\274\223\345\220\203\350\262\250\346\230\237\347\220\203\351\201\224\344\272\272\345\260\217\351\201\212\346\210\262\n"
"\345\270\214\346\234\233\345\244\247\345\256\266\351\203\275\347\216\251\345\276\227\351\226\213\345\277\203", 0));
        label_bg->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogAboutris: public Ui_DialogAboutris {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUTRIS_H
