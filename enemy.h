#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>
class enemy : public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    enemy();
public slots:
    void move();
};


#endif // ENEMY_H
