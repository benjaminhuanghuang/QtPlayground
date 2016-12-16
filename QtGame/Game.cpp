#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QMediaPlayer>

#include "Bullet.h"
#include "Game.h"
#include "Score.h"
#include "Enemy.h"




Game::Game(QWidget *parent)
{
    // Create scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    // 
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 600);

    // create player
    player = new Player();
    player->setPos(400,500);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    scene->addItem(player);

    // Create score
    score = new Score();
    scene->addItem(score);

    health = new Health();
    health->setPos(health->x(), health->y()+25);
    scene->addItem(health);

    // Spawn enemies
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);

    // Play background music, need module "multimedia"
    QMediaPlayer *music = new QMediaPlayer();
    music->setMedia(QUrl("qrc://sounds/sounds/bgsound.mp3"));

    show();
}
