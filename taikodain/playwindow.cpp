#include "playwindow.h"
#include "ui_playwindow.h"

PlayWindow::PlayWindow(QWidget *parent) :
    QMainWindow(parent),
        ui(new Ui::PlayWindow){
        ui->setupUi(this);
        connect(ui->action_tostartwindow, SIGNAL(triggered()), this, SLOT(displayTheMainWindow()));

        //play the cat gif
        QMovie *movie2;
        movie2 = new QMovie(":/images/200 (4).gif");
        ui->label_catpizza->setMovie(movie2);
        movie2->start();
        QMovie *movie3;
        movie3 = new QMovie(":/images/200 (5).gif");
        ui->label_catballoon->setMovie(movie3);
        movie3->start();

        //point scene
        scene = new QGraphicsScene(this);
        scene->setSceneRect(0,0,1031,151);
        ui->graphicsView_play->setScene(scene);

        //counting 30sec
        count.start();
        QTimer *timer=new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
        timer->start();

        srand(time(NULL));
        many=40; //less planets(easier) for larger number, normal 50
        displayscore=0;
        showScore();

        //randomgenerate!!!!!!!
        QTimer *timer2=new QTimer(this);
        connect(timer2, SIGNAL(timeout()), this, SLOT(generate_item()));
        timer2->start(500); //less planets(easier) for larger number, normal 500

        //30sec end the game
        QTimer *timer3=new QTimer(this);
        connect(timer3, SIGNAL(timeout()), this, SLOT(game_end()));
        timer3->setSingleShot(true);
        timer3->start(30000);
    }

PlayWindow::~PlayWindow(){
    delete ui;
}

//menu_quit
void PlayWindow::on_action_quit_triggered(){
    this->close();
    qApp->quit();
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

//generate items at random time
void PlayWindow::generate_item(){
    delay();
    drums *item = new drums();
    scene->addItem(item);
}

//random delay
void PlayWindow::delay(){
    QTime dieTime= QTime::currentTime().addMSecs(100+qrand()%10*many);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

//30sec end
void PlayWindow::game_end(){
    extern MainWindow *ptrw;
    ptrw -> show();
    extern dialog_score *dia;
    dia = new dialog_score();
    dia->show();
    this->close();
    //delete this;
}

//show the score
void PlayWindow::showScore(int acc){
    scoretext="Score:";
    displayscore+=acc;
    transcore.setNum(displayscore);
    scoretext += transcore;
    ui->label_score->setText(scoretext);
}

//show dialog howtoplay
void PlayWindow::on_action_howto_triggered(){
    dialog_howto *dia;
    dia = new dialog_howto();
    dia->show();
}
