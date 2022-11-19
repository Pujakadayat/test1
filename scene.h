#ifndef SCENE_H
#define SCENE_H
//#include <QGraphicsScene>
//#include <QTimer>
#include "birditem.h"
#include "pillaritem.h"
#include <QTimer>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QGraphicsSceneMouseEvent>
//#include <QTimer>
//#include "pillaritem.h"

//#include "birditem.h"

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Scene(QObject *parent = nullptr);
    void addBird();
   // void startGame();
    bool getGameOn() const;
    void setGameOn(bool value);
    void incrementScore();

signals:

public slots:
    void startGame();
      // QGraphicsScene interface
protected:
     void keyPressEvent(QKeyEvent *event);
     void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
     //void showGameOverGraphics();
    // void hideGameOvergraphics();
    // void cleanPillars();
    //void setUpPillarTimer();
   // void freezeBirdAndPillarsInPlace();
     bool gameOn;
     int score=0;
     int bestscore;

     QTimer * pillarTimer;
     BirdItem * bird;
     void showGameOverGraphics();
     void hideGameOvergraphics();
     void cleanPillars();
    void setUpPillarTimer();
    void freezeBirdAndPillarsInPlace();

    // bool gameOn;

     //int score=0;
    // int bestscore;

     QGraphicsPixmapItem * gameOverPix;
     QGraphicsTextItem * scoreTextItem;



};

#endif // SCENE_H
