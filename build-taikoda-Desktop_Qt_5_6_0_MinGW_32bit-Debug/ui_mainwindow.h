/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_quit;
    QAction *action_howto;
    QAction *action_aboutris;
    QAction *action_aboutgame;
    QAction *action_6;
    QWidget *centralWidget;
    QLabel *label_bgstart;
    QPushButton *pushbutton_play;
    QPushButton *pushbutton_exit;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1018, 753);
        MainWindow->setMinimumSize(QSize(1018, 753));
        MainWindow->setMaximumSize(QSize(1018, 753));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName(QStringLiteral("action_quit"));
        action_quit->setCheckable(false);
        action_quit->setEnabled(true);
        action_howto = new QAction(MainWindow);
        action_howto->setObjectName(QStringLiteral("action_howto"));
        action_aboutris = new QAction(MainWindow);
        action_aboutris->setObjectName(QStringLiteral("action_aboutris"));
        action_aboutgame = new QAction(MainWindow);
        action_aboutgame->setObjectName(QStringLiteral("action_aboutgame"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_bgstart = new QLabel(centralWidget);
        label_bgstart->setObjectName(QStringLiteral("label_bgstart"));
        label_bgstart->setGeometry(QRect(0, -10, 1021, 741));
        label_bgstart->setStyleSheet(QStringLiteral("background-color: rgb(84, 84, 84);"));
        label_bgstart->setPixmap(QPixmap(QString::fromUtf8(":/images/giphy2.gif")));
        label_bgstart->setAlignment(Qt::AlignCenter);
        pushbutton_play = new QPushButton(centralWidget);
        pushbutton_play->setObjectName(QStringLiteral("pushbutton_play"));
        pushbutton_play->setGeometry(QRect(260, 510, 201, 91));
        QPalette palette;
        QBrush brush(QColor(57, 137, 166, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(69, 127, 189, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        pushbutton_play->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(32);
        font.setBold(true);
        font.setWeight(75);
        pushbutton_play->setFont(font);
        pushbutton_play->setStyleSheet(QStringLiteral("color: rgb(57, 137, 166);"));
        pushbutton_play->setAutoRepeat(false);
        pushbutton_exit = new QPushButton(centralWidget);
        pushbutton_exit->setObjectName(QStringLiteral("pushbutton_exit"));
        pushbutton_exit->setGeometry(QRect(590, 510, 201, 91));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(65, 132, 161, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        pushbutton_exit->setPalette(palette1);
        pushbutton_exit->setFont(font);
        pushbutton_exit->setStyleSheet(QStringLiteral("color: rgb(57, 137, 166);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 50, 731, 211));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI Black"));
        font1.setPointSize(45);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("color: rgb(238,244,237);\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(108, 229, 199, 129), stop:0.77 rgba(255, 202, 156, 204), stop:0.89 rgba(76, 106, 143, 64), stop:1 rgba(0, 0, 0, 0));"));
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::NoTextInteraction);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1018, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_quit);
        menu_3->addAction(action_howto);
        menu_3->addAction(action_aboutris);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RIS\347\232\204\345\244\252\351\274\223\351\201\224\344\272\272\343\203\275(\302\264\342\210\200`*)\357\276\211", 0));
        action->setText(QApplication::translate("MainWindow", "\346\232\253\345\201\234", 0));
        action_2->setText(QApplication::translate("MainWindow", "\351\207\215\346\226\260\351\226\213\345\247\213", 0));
        action_quit->setText(QApplication::translate("MainWindow", "\346\210\221\344\270\215\347\216\251\344\272\206", 0));
        action_howto->setText(QApplication::translate("MainWindow", "\350\246\201\346\200\216\351\272\274\347\216\251", 0));
        action_aboutris->setText(QApplication::translate("MainWindow", "\351\227\234\346\226\274\344\275\234\350\200\205\350\220\214RIS", 0));
        action_aboutgame->setText(QApplication::translate("MainWindow", "\351\227\234\346\226\274\351\200\231\343\204\215\351\201\212\346\210\262", 0));
        action_6->setText(QApplication::translate("MainWindow", "\345\233\236\345\210\260\351\226\213\345\247\213\347\225\253\351\235\242", 0));
        label_bgstart->setText(QString());
        pushbutton_play->setText(QApplication::translate("MainWindow", "PLAY", 0));
        pushbutton_exit->setText(QApplication::translate("MainWindow", "EXIT", 0));
        label->setText(QApplication::translate("MainWindow", "Taiko of\n"
"PLANET EATER", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\351\201\212\346\210\262", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\350\252\277\346\225\264", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\350\252\252\346\230\216", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
