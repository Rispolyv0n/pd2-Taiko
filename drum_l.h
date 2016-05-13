#ifndef DRUM_L_H
#define DRUM_L_H

#include<QGraphicsPixmapItem>
#include<QPixmap>
#include<QObject>

class drum_l: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    drum_l();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
};

#endif // DRUM_L_H
