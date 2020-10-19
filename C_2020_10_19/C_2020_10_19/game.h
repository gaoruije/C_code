// .h头文件中放的大多数都是头文件的声明、函数的声明、全局变量的声明。头文件可以被多个源文件包含的。
//宏定义，也就会是放的是一些比较虚的东西,而函数的定义、变量的定义、主逻辑的实现、都在源文件中声明。
#pragma once//头文件无脑加 pragma once,目的是为了防止头文件被冲突重复包含。

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void show();//对show函数声明。
void Menu();//对Menu函数的声明。
void Game();//声明函数。
# pragma warning(disable:4996);//这里是为了解决scanf 出现的问题。
#define RANGE 100;//宏定义