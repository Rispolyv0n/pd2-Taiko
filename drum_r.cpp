#include "drum_r.h"
#include "playwindow.h"
#include<math.h>
#include<QTimer>
#include<QList>
#include<QGraphicsScene>
#include<QKeyEvent>

drum_r::drum_r(): QObject(), QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/images/ball_r.png"));
    setPos(1005,25);
    setFlag(QGraphicsItem::ItemIsFocusable);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(12);
}
void drum_r::move(){
    setPos(x()-5,y());
    if(pos().x()==100) this->setFocus();
    else if(pos().x()<-100){
        scene()->removeItem(this);
        delete this;
    }
}
void drum_r::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_R && pos().x()>10){
            extern PlayWindow *m;
            m->showScore(12-abs(pos().x()-45)/5);
            scene()->removeItem(this);
            delete this;
    }
}
