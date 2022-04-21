//#pragma once
//#include <iostream>
//#include <vector>
//#include <conio.h>
//#include <qpair.h>
//#include "Calculate.h"
//
//using namespace std;
//
//class CSnake
//{
//public:
//	CSnake();
//	vector<vector<int>> snake_node;//蛇身节点
//	char direction;		// 当前朝向
//	int head_x;			// 蛇头坐标
//	int head_y;			// 蛇头坐标
//	vector<QPair<QPair<int, int>, QString>> food_pos;	  // 食物坐标+字母
//
//	vector<int> mapFlag{ vector<int>(900,1) };
//	int snake_length = 2;
//
//	// 生成新的食物
//	void newFood();
//	// 移动蛇
//	int moveSnake();
//};