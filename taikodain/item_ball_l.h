#ifndef ITEM_BALL_L_H
#define ITEM_BALL_L_H
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>

class item_ball_l : public QGraphicsPixmapItem
{
public:
    item_ball_l();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void advance(int phase);
    bool contains(const QPointF &point) const;
    bool isObscuredBy(const QGraphicsItem *item) const;
    QPainterPath opaqueArea() const;
    QPainterPath shape() const;
    int type() const;

protected:
    void keyPressEvent(QKeyEvent *event);
    //void keyReleaseEvent(QKeyEvent *event);
private:
    qreal speed;

};

#endif // ITEM_BALL_L_H
