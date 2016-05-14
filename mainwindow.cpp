#include "mainwindow.h"
#include "ui_mainwindow.h"

PlayWindow *m;
dialog_score *dia;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushbutton_play, SIGNAL(click()), this, SLOT(displayTheWindow()));

    //play the background gif
    movie = new QMovie(":/images/giphy2.gif");
    ui->label_bgstart->setMovie(movie);
    movie->start();

    //repeated bgm
    QMediaPlayer *bgm = new QMediaPlayer();
    bgm->setMedia(QUrl("qrc:/images/Cicada - 越過海岸山脈 Over Coastal Range《仰望海平面》Light Shining Through the Sea.mp3"));
    bgm->play();
    connect(bgm,SIGNAL(mediaStatusChanged(QMediaPlayer::MediaStatus)),bgm,SLOT(play()));
}

MainWindow::~MainWindow(){
    delete ui;
}

//button_exit
void MainWindow::on_pushbutton_exit_clicked(){
    this->close();
    qApp->quit();
}

//button_play
void MainWindow::on_pushbutton_play_clicked(){
    extern PlayWindow *m;
    m = new PlayWindow();
    m->show();
    this->hide();
}

//menu_quit
void MainWindow::on_action_quit_triggered(){
    this->close();
    qApp->quit();
}

//menu_aboutris
void MainWindow::on_action_aboutris_triggered(){
    DialogAboutris *daboutris;
    daboutris = new DialogAboutris();
    daboutris->show();
}

//menu_howto
void MainWindow::on_action_howto_triggered(){
    dialog_howto *dia;
    dia = new dialog_howto();
    dia->show();
}
