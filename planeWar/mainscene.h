#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <QTimer>
#include "map.h"
#include "heroplane.h"
#include "bullet.h"
#include "enemyplane.h"
#include "bomb.h"

class MainScene : public QWidget
{
    Q_OBJECT

public:
    MainScene(QWidget *parent = nullptr);
    ~MainScene();
    //配置窗口页面
     void  initScene();

     //启动游戏  用于启动定时器对象
     void playGame();
     //更新坐标
     void updatePosition();
     //绘图事件
     void paintEvent(QPaintEvent *event);
     //鼠标移动事件
     void mouseMoveEvent(QMouseEvent *event);
     //碰撞检测
     void collisionDetection();

     //地图对象
     Map m_map;

     //飞机对象
     HeroPlane m_hero;

//     //测试子弹代码
//     Bullet temp_bullet;

     //敌机出场
     void enemyToScene();

     //敌机数组
     EnemyPlane m_enemys[ENEMY_NUM];

     //敌机出场间隔记录
     int m_recorder;

     //爆炸数组
     Bomb m_bombs[BOMB_NUM];

     //定时器对象
     QTimer m_Timer;
};
#endif // MAINSCENE_H
