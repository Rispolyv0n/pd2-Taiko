#include "drumword_l.h"
#include "playwindow.h"
#include<math.h>
#include<QTimer>
#include<QList>
#include<QGraphicsScene>
#include<QKeyEvent>

drumword_l::drumword_l(): QObject(), QGraphicsPixmapItem(){
    setPixmap(QPixmap(":/images/wordball_l.png"));
    setPos(1005,25);
    setFlag(QGraphicsItem::ItemIsFocusable);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(12);

}
void drumword_l::move(){
    setPos(x()-5,y());
    if(pos().x()==100) this->setFocus();
    else if(pos().x()<-100){
        scene()->removeItem(this);
        delete this;
    }
}
void drumword_l::keyPressEvent(QKeyEvent *event){
    if(event->key()==Qt::Key_L && pos().x()>10){
            extern PlayWindow *m;
            m->showScore(12-abs(pos().x()-45)/5);
            scene()->removeItem(this);
            delete this;
    }
}
