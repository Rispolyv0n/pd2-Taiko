#ifndef DRUMWORD_L_H
#define DRUMWORD_L_H

#include<QGraphicsPixmapItem>
#include<QPixmap>
#include<QObject>

class drumword_l: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    drumword_l();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
};

#endif // DRUMWORD_L_H
