#pragma execution_character_set("utf-8")

#include <QtWidgets/QWidget>
#include <qpainter.h>
#include <qvector.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qtextstream.h>
#include <qfile.h>
#include <qpair.h>
#include <QKeyEvent>
#include <qkeyeventtransition.h>
#include <qmessagebox.h>
#include <qstack.h>
#include <qtimer.h>
#include <qqueue.h>
#include "ui_snake.h"

struct fNode
{
    int x;//横坐标
    int y;//纵坐标
    int F;//f距离
    int G;
    int H;
    fNode* parent;
    fNode():x(-1), y(-1), F(INT_MAX), G(INT_MAX), H(INT_MAX),  parent(NULL){}
};


class snake : public QWidget
{
    Q_OBJECT

public:
    snake(QWidget *parent = Q_NULLPTR);
    void paintEvent(QPaintEvent*);  //绘图
    void keyPressEvent(QKeyEvent* event);   //键盘响应
    void generate_food();   //生成食物
    int AStart(int startX, int startY); //A*算法，自动寻路
    bool isSelf(int x, int y);
    fNode* findIt(QVector<fNode*> set, int x, int y);  //检测是否在某list中
    bool WrongFood(int x, int y); //检查是否吃到了错误的食物
private:
    Ui::snakeClass ui;
    QLabel* score_label;
    QLabel* word_label; //对应中文提示
    QLabel* score_lineEdit; //分数
    int score;  //完成了几个单词就有几分
    int direction; //方向
    int foodCNT; //吃到的食物数量
    QVector<QPair<int, int>> food_pos;//食物坐标
    QVector<QStringList> words;  //单词书
    QString last;       //上一个单词
    QString Chinese;    //中文提示
    bool PFood; //标志着是否画出所有食物
    QFont ft;
    QTimer* timer;
    QVector<QPair<int, int>> snake_pos;//蛇的节点坐标
    //QVector<QPair<int, int>> snake_pos_tmp;//临时的蛇的节点坐标
    QPushButton* startbtn;
    QPushButton* stopbtn;
    QPushButton* autobtn;
    QStack<int> keyMsg; //A*计算得出的消息栈
    QVector<fNode*> openList;  //待检测集合
    QVector<fNode*> abList;    //抛弃集合
    QVector<fNode*> closeList; //检测完毕集合
    bool Auto;
private slots:
    void timeroutslot();
    void startbtn_click();  //开始
    void stopbtn_click();   //暂停
    void autobtn_click();//自动
};
