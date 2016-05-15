#include "drums.h"
#include "playwindow.h"

drums::drums(): QObject(), QGraphicsPixmapItem(){
    //set one of four pixmaps, initial pos, focusable flag
    extern PlayWindow *m;
    s = new QMediaPlayer();
    s->setMedia(QUrl("qrc:/images/din.mp3"));
    srand(time(NULL));
    int chooseitem;
    chooseitem = qrand()%2;
    if(m->displaytime>25){
        switch (chooseitem) {
            case 0:{
                setPixmap(QPixmap(":/images/wordball_r.png"));
                whichdrum=0;
                break;
            }
            case 1:{
                setPixmap(QPixmap(":/images/wordball_l.png"));
                whichdrum=1;
                break;
            }
        }
    }
    else{
        switch (chooseitem) {
            case 0:{
                setPixmap(QPixmap(":/images/ball_r.png"));
                whichdrum=0;
                break;
            }
            case 1:{
                setPixmap(QPixmap(":/images/ball_l.png"));
                whichdrum=1;
                break;
            }
        }
    }
    setPos(1005,25);
    setFlag(QGraphicsItem::ItemIsFocusable);

    //move
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(12);
}
void drums::move(){
    setPos(x()-5,y());
    if(pos().x()==100) this->setFocus();
    else if(pos().x()<-100){
        scene()->removeItem(this);
        delete this;
    }
}
void drums::keyPressEvent(QKeyEvent *event){
    extern PlayWindow *m;
    if(event->key()==Qt::Key_R && pos().x()>10 && whichdrum==0){
        m->showScore(12-abs(pos().x()-45)/5);
        s->play();
        scene()->removeItem(this);
        delete this;
    }
    else if(event->key()==Qt::Key_L && pos().x()>10 && whichdrum==1){
        m->showScore(12-abs(pos().x()-45)/5);
        s->play();
        scene()->removeItem(this);
        delete this;
    }
}
