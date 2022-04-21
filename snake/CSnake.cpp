//#include "CSnake.h"
//
//CSnake::CSnake()
//{
//	// 初始化蛇身结点，蛇身长度为2
//	vector<int> temp_node = { 0,1 };
//	snake_node.push_back(temp_node);
//	temp_node = { 1,1 };
//	snake_node.push_back(temp_node);
//
//	// 初始化蛇头朝向右边
//	direction = 'R';
//
//	// 初始化蛇头坐标
//	head_x = 1;
//	head_y = 1;
//
//	//食物坐标初始化
//	food_pos.push_back(qMakePair(qMakePair(7, 7), "a"));
//	food_pos.push_back(qMakePair(qMakePair(14, 14), "b"));
//	food_pos.push_back(qMakePair(qMakePair(3, 4), "l"));
//	food_pos.push_back(qMakePair(qMakePair(5, 8), "e"));
//	/*mapFlag[119] = mapPos();*/
//
//	// 初始化地图标志
//	for (size_t i = 0; i < snake_node.size(); i++)
//	{
//		int body_site = 16 * snake_node[i][1] + snake_node[i][0];
//		mapFlag[body_site] = 0;
//	}
//
//}
//
//void CSnake::newFood()
//{
//}
//
//int CSnake::moveSnake()
//{
//	return 0;
//}
