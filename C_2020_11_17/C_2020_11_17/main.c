#include <stdio.h>
#include <windows.h>
#include <math.h>
//1,将一个四位数，反向输出。
//https://www.nowcoder.com/practice/1f7c1d67446e4361bf4af67c08e0b8b0?tpId=107&tqId=33298&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking
int print()
{
	int a;
	scanf_s("%d", &a);
	int arr[4];
	    arr[0] = a % 10;
		arr[1] = (a / 10) % 10;
		arr[2] = (a / 100) % 10;
		arr[3] = a / 1000;
		for (int i = 0; i < 4; i++){
			printf("%d", arr[i]);
		}
		printf("\n");
}
//2,输入两个正数,先求两个数的和
//https://www.nowcoder.com/practice/bcaf710fb58a44e1b678a890e6e90d7c?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
//1.只保留该数的最后两位，例如：对KiKi来说1234等价于34
//如果计算结果大于等于 100， 那么KIKI也仅保留计算结果的最后两位，如果此两位中十位为0，则只保留个位。

int print1(int a, int b)
{
	scanf_s("%d %d", &a, &b);
	int sum = a + b;
	if (sum >= 100){
		sum %= 100;
		if (sum / 10 == 0){
			printf("%d", sum % 10);
		}
		else{
			printf("%d", sum);
		}
	}
	else{
		printf("%d\n", sum);
	}
}
	//3,给定一个浮点数，要求得到该浮点数的个位数。
	//https://www.nowcoder.com/practice/ffa94d27c6534396aef38813535c279f?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
int print2()
{
	double a;
	scanf_s("%lf", &a);//double的输出是lf
	printf("%d", (int)a % 10);//对浮点数进行强制类型转换
}
//4,求输入年数，转换为秒数
//一年约有3.156×107s，要求输入您的年龄，显示该年龄合多少秒
//https://www.nowcoder.com/practice/e1d1bd99fee34b66ae3c777b74d555c8?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
//#include <math.h>
//可以用函数表示  在c语言中 求x的y次方可用pow(x,y)表示。所以10的N次方也可表示为pow(10,N),
//需要注意的用pow(x,y)的话要用到math.h头文件
void Conversion()
{
	//因为age计算的结果非常大，所以保险起见我们用long long int
	long long int age;
	//读取年龄
	scanf_s("%lld", &age);
	//函数pow(double_1,double_2),可以表示一个数的N次方
	int b = 3.156*pow(10, 7);
	age *= b;
	printf("%lld", age);
}

int main()
{
	Conversion();
	//print();
	/*int a, b;
	scanf_s("%d %d", &a, &b);
	print1(a, b);*/
	//print2();
	system("pause");
	return 0;
}