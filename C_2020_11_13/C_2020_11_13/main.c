#include <stdio.h>
#include <windows.h>
//求给定区间内的数字中带有9的数字的个数,4位数字以内的
void FindthenumberWith(int m,int n)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int count = 0;
	for (i = m; i <= n; i++){
		//思路：单独拿出一个数值的所有位数的方法，是先除再模。
		//a,单独讲每一位进行判断
		a = (m / 1000) % 10;//先看千位是否含9
		b = (m / 100) % 10;//看百位是否含9
		c = (m / 10) % 10;//看十位是否含9
		d = m % 10;//看个位是否含9
		//b,进行判定
		if ((a == 9) || (b == 9) || (c == 9) || (d == 9)){
			count++;
		}
	}
	printf("你输入的范围内带有9的数字有 %d 个\n", count);
}
int main()
{
	FindthenumberWith(1990, 1993);
	system("pause");
	return 0;
}