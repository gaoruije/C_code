#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <windows.h>
#include <time.h>//�����������Ҫ�õ��Ŀ�


#pragma warning(disable:4996)//����scanf�����ʱ�Ĵ���

#define ROW 3 //�������̵�����Ϊ3
#define COL 3 //�������̵�����Ϊ3
#define P_COLOR '*' //�궨���û��������� * �������ϱ�ʾ
#define C_COLOR '#' //�궨����Ե������� # �������ϱ�ʾ
#define NEXT 'N' //�궨��Ҫ�������������� N ����ʾ
#define DRAW 'D' //�궨������� D ����ʾ

void Menu();//�˵�����������
void Game();//��Ϸ����������

#endif