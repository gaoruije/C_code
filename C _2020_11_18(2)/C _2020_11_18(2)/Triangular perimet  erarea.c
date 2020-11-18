#include <stdio.h>
#include <windows.h>
#include <math.h>
//输入三个数字能构成三角形，求周长和面积,要求保留两位小数
//https://www.nowcoder.com/practice/109a44d649a142d483314e8a57e2c710?tpId=107&tqId=33304&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	float C = a + b + c;//周长，直接转浮点数
	//海伦公式求面积。
	//求面积，用海伦公式 ：S=sqrt[p(p-a)(p-b)(p-c)]，p = (a+b+c)/2
	float p = (a + b + c) / 2.00;
	float area = sqrt(p*(p - a) * (p - b) * (p - c));
	printf("%.2f %.2f", C, area);
	system("pause");
	return 0;
}