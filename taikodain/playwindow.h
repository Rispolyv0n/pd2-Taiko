#ifndef PLAYWINDOW_H
#define PLAYWINDOW_H

#include <QMainWindow>
#include <QMovie>
#include <Qlabel>
#include <QWidget>
#include <QTime>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QPixmap>
#include <QTimer>
#include <QThread>
#include <cstdlib>
#include <ctime>

#include "dialog_score.h"
#include "dialog_howto.h"
#include "mainwindow.h"
#include "drums.h"

namespace Ui {
class PlayWindow;
}

class PlayWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlayWindow(QWidget *parent = 0);
    ~PlayWindow();
    void showScore(int acc=0);
    int displayscore;
    int displaytime;

public slots:
    void generate_item();
    void delay();
    void game_end();

private slots:
    void showTime();
    void on_action_howto_triggered();
    void on_action_quit_triggered();
    void on_action_ris_triggered();

private:
    Ui::PlayWindow *ui;
    QGraphicsScene *scene;
    QGraphicsView view;
    QString alltimetext;
    QString timetext;
    QTime count;
    int many;
    QString scoretext;
    QString transcore;
};

#endif // PLAYWINDOW_H
