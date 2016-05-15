#include "item_ball_l.h"

item_ball_l::item_ball_l()
{
    QPixmap pix(":/ball_l.png");
    //this->
    speed = 5;
    int startx = 800;
    int starty = 0;
    setPos(mapToParent(startx,starty));
}

QRectF item_ball_l::boundingRect() const
{
    return QRectF(0,0,100,100);
}

void item_ball_l::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

}

void item_ball_l::keyPressEvent(QKeyEvent *event)
{

}

void item_ball_l::advance(int phase){
    if (!phase) return;
    QPointF location = this->pos();
    setPos(mapToParent(0,speed));

}

bool item_ball_l::contains(const QPointF &point) const
{

}

bool item_ball_l::isObscuredBy(const QGraphicsItem *item) const
{

}

QPainterPath item_ball_l::opaqueArea() const
{

}

QPainterPath item_ball_l::shape() const
{

}

int item_ball_l::type() const
{

}
