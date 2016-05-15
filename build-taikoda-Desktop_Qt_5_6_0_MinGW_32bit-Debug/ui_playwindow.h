/********************************************************************************
** Form generated from reading UI file 'playwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYWINDOW_H
#define UI_PLAYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayWindow
{
public:
    QAction *action_pause;
    QAction *action_restart;
    QAction *action_quit;
    QAction *action_tostartwindow;
    QAction *action_howto;
    QAction *action_ris;
    QAction *action_aboutgame;
    QWidget *centralwidget;
    QLabel *label_playbg;
    QLabel *label_catpizza;
    QFrame *line_critical;
    QLabel *label_time;
    QLabel *label_score;
    QGraphicsView *graphicsView_play;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_catballoon;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *PlayWindow)
    {
        if (PlayWindow->objectName().isEmpty())
            PlayWindow->setObjectName(QStringLiteral("PlayWindow"));
        PlayWindow->resize(1021, 711);
        action_pause = new QAction(PlayWindow);
        action_pause->setObjectName(QStringLiteral("action_pause"));
        action_restart = new QAction(PlayWindow);
        action_restart->setObjectName(QStringLiteral("action_restart"));
        action_quit = new QAction(PlayWindow);
        action_quit->setObjectName(QStringLiteral("action_quit"));
        action_tostartwindow = new QAction(PlayWindow);
        action_tostartwindow->setObjectName(QStringLiteral("action_tostartwindow"));
        action_howto = new QAction(PlayWindow);
        action_howto->setObjectName(QStringLiteral("action_howto"));
        action_ris = new QAction(PlayWindow);
        action_ris->setObjectName(QStringLiteral("action_ris"));
        action_aboutgame = new QAction(PlayWindow);
        action_aboutgame->setObjectName(QStringLiteral("action_aboutgame"));
        centralwidget = new QWidget(PlayWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_playbg = new QLabel(centralwidget);
        label_playbg->setObjectName(QStringLiteral("label_playbg"));
        label_playbg->setGeometry(QRect(0, -100, 1021, 811));
        label_playbg->setStyleSheet(QStringLiteral("background-color: rgb(243, 231, 219);"));
        label_playbg->setPixmap(QPixmap(QString::fromUtf8(":/images/a9d6394a02957efa11b10b815b763ee4.jpg")));
        label_playbg->setAlignment(Qt::AlignCenter);
        label_catpizza = new QLabel(centralwidget);
        label_catpizza->setObjectName(QStringLiteral("label_catpizza"));
        label_catpizza->setGeometry(QRect(850, 500, 161, 161));
        label_catpizza->setPixmap(QPixmap(QString::fromUtf8(":/200 (4).gif")));
        label_catpizza->setAlignment(Qt::AlignCenter);
        line_critical = new QFrame(centralwidget);
        line_critical->setObjectName(QStringLiteral("line_critical"));
        line_critical->setGeometry(QRect(100, 190, 21, 151));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_critical->sizePolicy().hasHeightForWidth());
        line_critical->setSizePolicy(sizePolicy);
        line_critical->setSizeIncrement(QSize(0, 0));
        line_critical->setBaseSize(QSize(0, 0));
        line_critical->setFrameShape(QFrame::VLine);
        line_critical->setFrameShadow(QFrame::Sunken);
        label_time = new QLabel(centralwidget);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(740, 90, 261, 61));
        QFont font;
        font.setFamily(QStringLiteral("Castellar"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_time->setFont(font);
        label_time->setStyleSheet(QStringLiteral("color: rgb(88, 88, 106);"));
        label_score = new QLabel(centralwidget);
        label_score->setObjectName(QStringLiteral("label_score"));
        label_score->setGeometry(QRect(740, 20, 261, 61));
        label_score->setFont(font);
        label_score->setStyleSheet(QStringLiteral("color: rgb(88, 88, 106);"));
        graphicsView_play = new QGraphicsView(centralwidget);
        graphicsView_play->setObjectName(QStringLiteral("graphicsView_play"));
        graphicsView_play->setGeometry(QRect(-5, 190, 1031, 151));
        graphicsView_play->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:repeat, x1:0, y1:0, x2:1, y2:0, stop:0.923274 rgba(250, 250, 250, 174), stop:1 rgba(255, 255, 255, 255));"));
        graphicsView_play->setFrameShape(QFrame::NoFrame);
        graphicsView_play->setFrameShadow(QFrame::Raised);
        graphicsView_play->setLineWidth(1);
        graphicsView_play->setMidLineWidth(0);
        graphicsView_play->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_play->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_play->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 570, 91, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/wordball_r.png")));
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::NoTextInteraction);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(540, 570, 91, 91));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/wordball_l.png")));
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setTextInteractionFlags(Qt::NoTextInteraction);
        label_catballoon = new QLabel(centralwidget);
        label_catballoon->setObjectName(QStringLiteral("label_catballoon"));
        label_catballoon->setGeometry(QRect(50, 0, 181, 191));
        label_catballoon->setPixmap(QPixmap(QString::fromUtf8(":/images/200 (5).gif")));
        label_catballoon->setAlignment(Qt::AlignCenter);
        label_catballoon->setTextInteractionFlags(Qt::NoTextInteraction);
        PlayWindow->setCentralWidget(centralwidget);
        label_playbg->raise();
        graphicsView_play->raise();
        label_catpizza->raise();
        label_time->raise();
        label_score->raise();
        line_critical->raise();
        label->raise();
        label_2->raise();
        label_catballoon->raise();
        menubar = new QMenuBar(PlayWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1021, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        PlayWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(action_quit);
        menu_3->addAction(action_howto);
        menu_3->addAction(action_ris);

        retranslateUi(PlayWindow);

        QMetaObject::connectSlotsByName(PlayWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlayWindow)
    {
        PlayWindow->setWindowTitle(QApplication::translate("PlayWindow", "RIS\347\232\204\345\244\252\351\274\223\351\201\224\344\272\272\343\203\275(\302\264\342\210\200`*)\357\276\211", 0));
        action_pause->setText(QApplication::translate("PlayWindow", "\346\232\253\345\201\234", 0));
        action_restart->setText(QApplication::translate("PlayWindow", "\351\207\215\346\226\260\351\226\213\345\247\213", 0));
        action_quit->setText(QApplication::translate("PlayWindow", "\346\210\221\344\270\215\347\216\251\344\272\206", 0));
        action_tostartwindow->setText(QApplication::translate("PlayWindow", "\345\233\236\345\210\260\351\226\213\345\247\213\347\225\253\351\235\242", 0));
        action_howto->setText(QApplication::translate("PlayWindow", "\350\246\201\346\200\216\351\272\274\347\216\251", 0));
        action_ris->setText(QApplication::translate("PlayWindow", "\351\227\234\346\226\274\344\275\234\350\200\205\350\220\214RIS", 0));
        action_aboutgame->setText(QApplication::translate("PlayWindow", "\351\227\234\346\226\274\351\200\231\343\204\215\351\201\212\346\210\262", 0));
        label_playbg->setText(QString());
        label_catpizza->setText(QString());
        label_time->setText(QApplication::translate("PlayWindow", "Time:", 0));
        label_score->setText(QApplication::translate("PlayWindow", "Score:", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_catballoon->setText(QString());
        menu->setTitle(QApplication::translate("PlayWindow", "\351\201\212\346\210\262", 0));
        menu_2->setTitle(QApplication::translate("PlayWindow", "\350\252\277\346\225\264", 0));
        menu_3->setTitle(QApplication::translate("PlayWindow", "\350\252\252\346\230\216", 0));
    } // retranslateUi

};

namespace Ui {
    class PlayWindow: public Ui_PlayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYWINDOW_H
