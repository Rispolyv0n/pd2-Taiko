#ifndef DRUMWORD_R_H
#define DRUMWORD_R_H

#include<QGraphicsPixmapItem>
#include<QPixmap>
#include<QObject>

class drumword_r: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    drumword_r();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
};

#endif // DRUMWORD_R_H
