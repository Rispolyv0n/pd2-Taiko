#ifndef DRUMS_H
#define DRUMS_H

#include<QGraphicsPixmapItem>
#include<QPixmap>
#include<QObject>
#include<math.h>
#include<QTimer>
#include<QList>
#include<QGraphicsScene>
#include<QKeyEvent>
#include<ctime>
#include<cstdlib>
#include<QMediaPlayer>

class drums: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    drums();
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
private:
    int whichdrum;
    QMediaPlayer *s;
};

#endif // DRUMS_H
