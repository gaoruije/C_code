#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <windows.h>
#include <time.h>//种随机数种子要用到的库


#pragma warning(disable:4996)//消除scanf在输出时的错误

#define ROW 3 //设置棋盘的行数为3
#define COL 3 //设置棋盘的列数为3
#define P_COLOR '*' //宏定义用户的落子用 * 在棋盘上表示
#define C_COLOR '#' //宏定义电脑的落子用 # 在棋盘上表示
#define NEXT 'N' //宏定义要继续进行落子用 N 来表示
#define DRAW 'D' //宏定义和棋用 D 来表示

void Menu();//菜单函数的声明
void Game();//游戏函数的声明

#endif