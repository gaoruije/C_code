#include <stdio.h>
#include <windows.h>
#define M 5
//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）
void Ary()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	double result = (double)(a + b + c + d + e) / 5;//要强转为double型
	//因为要求是输出一位小数，用lf来打印，点后边跟的是几就是打印几位小数。
	printf("%.1lf", result);//打印的是1位小数。
}
//2,输入一个十六进制数a，和一个八进制数b，输出a + b的十进制结果（范围 - 231~231 - 1）。
void Sum()
{
	int a, b, sum;
	//下边要注意读取十六进制和八进制的规则
	//16进制是0x%x;8进制是0%o.
	scanf_s("0x%x 0%o", &a, &b);
	printf("%d", a + b);
}
int main()
{
	//Ary();
	Sum();
	system("pause");
	return 0;
}