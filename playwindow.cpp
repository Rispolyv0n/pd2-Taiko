#include "playwindow.h"
#include "ui_playwindow.h"


PlayWindow::PlayWindow(QWidget *parent) :
    QMainWindow(parent),
        ui(new Ui::PlayWindow){
        ui->setupUi(this);
        connect(ui->action_tostartwindow, SIGNAL(triggered()), this, SLOT(displayTheMainWindow()));

        //play the catpizza gif
        QMovie *movie2;
        movie2 = new QMovie(":/200 (4).gif");
        ui->label_catpizza->setMovie(movie2);
        movie2->start();

        //point scene
        scene = new QGraphicsScene(this);
        scene->setSceneRect(0,0,1031,151);
        ui->graphicsView_play->setScene(scene);

        //timer for counting 30sec
        count.start();
        QTimer *timer=new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
        timer->start();

        srand(time(NULL));
        speed=800;
        displayscore=0;
        showScore();

        //randomgenerate!!!!!!!
        QTimer *timer2=new QTimer(this);
        connect(timer2, SIGNAL(timeout()), this, SLOT(generate_item()));
        timer2->start(500);

        //30sec end
        QTimer *timer3=new QTimer(this);
        connect(timer3, SIGNAL(timeout()), this, SLOT(game_end()));
        timer3->start(30000);

        //keypress




    }

PlayWindow::~PlayWindow(){
    delete ui;
}

//menu_quit
void PlayWindow::on_action_quit_triggered(){
    this->close();
}

//menu_tostartwindow:display the main window and hide this one
void PlayWindow::on_action_tostartwindow_triggered(){
    extern MainWindow *ptrw;
    ptrw -> show();
    this->close();
}

//show new dialog aboutris
void PlayWindow::on_action_ris_triggered(){
    DialogAboutris *daboutris;
    daboutris = new DialogAboutris();
    daboutris->show();
}

//timecounting and show
void PlayWindow::showTime(){
    alltimetext="Time:";
    displaytime=30-count.elapsed()/1000;
    timetext.setNum(displaytime);
    alltimetext += timetext;
    ui->label_time->setText(alltimetext);
}

//menu_restart
void PlayWindow::on_action_restart_triggered(){
    PlayWindow *mPlayWindow;
    mPlayWindow = new PlayWindow();
    this->hide();
    mPlayWindow->show();
}

//generate random items
void PlayWindow::generate_item(){
    delay();
    int chooseitem;
    chooseitem = qrand()%2;
    if(displaytime>25){
        switch (chooseitem) {
            case 0:{
                drumword_l *item_w_L = new drumword_l();
                scene->addItem(item_w_L);
                break;
            }
            case 1:{
                drumword_r *item_w_R = new drumword_r();
                scene->addItem(item_w_R);
                break;
            }
        }
    }
    else{
        switch (chooseitem) {
            case 0:{
                drum_l *item_L = new drum_l();
                scene->addItem(item_L);
                break;
            }
            case 1:{
                drum_r *item_R = new drum_r();
                scene->addItem(item_R);
                break;
            }
        }
    }
}

//random delay
void PlayWindow::delay(){
    QTime dieTime= QTime::currentTime().addMSecs(200+qrand()%speed);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

//30sec end
void PlayWindow::game_end(){
    extern MainWindow *ptrw;
    ptrw -> show();
    dialog_score *dia;
    dia = new dialog_score();
    dia->show();
    this->close();
}

//key press event
void PlayWindow::keyPressEvent(QKeyEvent *event){

}

//show the score
void PlayWindow::showScore(int acc){
    scoretext="Score:";
    displayscore+=acc;
    transcore.setNum(displayscore);
    scoretext += transcore;
    ui->label_score->setText(scoretext);
}




