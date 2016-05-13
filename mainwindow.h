#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QWidget>
#include <QMovie>
#include "playwindow.h"
#include "dialogaboutris.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_pushbutton_play_clicked();
    void on_pushbutton_exit_clicked();
    void on_action_quit_triggered();
    void on_action_aboutris_triggered();

private slots:

private:
    Ui::MainWindow *ui;
    QMovie *movie;
};

#endif // MAINWINDOW_H
