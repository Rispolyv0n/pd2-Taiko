#include "mainwindow.h"
#include "ui_mainwindow.h"

PlayWindow *m;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushbutton_play, SIGNAL(click()), this, SLOT(displayTheWindow()));
    //connect(ui->action_aboutris, SIGNAL(triggered()), this, SLOT(displayTheDialogAboutris()));

    //play the background gif
    movie = new QMovie(":/giphy2.gif");
    ui->label_bgstart->setMovie(movie);
    movie->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//button_exit
void MainWindow::on_pushbutton_exit_clicked()
{
    this->close();
}

//button_play
void MainWindow::on_pushbutton_play_clicked()
{
    //PlayWindow *m;
    extern PlayWindow *m;
    m = new PlayWindow();
    m->show();
    this->hide();
}

//menu_quit
void MainWindow::on_action_quit_triggered()
{
    this->close();
}

//menu_aboutris
void MainWindow::on_action_aboutris_triggered()
{
    DialogAboutris *daboutris;
    daboutris = new DialogAboutris();
    daboutris->show();
}
