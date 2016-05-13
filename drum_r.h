#ifndef DRUM_R_H
#define DRUM_R_H

#include<QGraphicsPixmapItem>
#include<QPixmap>
#include<QObject>

class drum_r: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    drum_r();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
};

#endif // DRUM_R_H
