#include <stdio.h>
#include <windows.h>
//1,从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。是字符输出YES,不是输出NO.
//多组输入，多行输出，每行输入包括一个字符。
void Judgmentcharacter()
{
	char ch;
	while (scanf_s("%c", &ch) != EOF ){
		if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A')){
			printf("YES\n");
			getchar();//每进行完一次后都会进行再次读取字符的操作
		}
		else{
			printf("NO\n");
			getchar();//每进行完一次后都会进行再次取字符的操作
		}
	}
}
//2，判断一个人的健康状况，BMI=(体重/(身高的平方))在18.5~23.9就正常，否则不正常
void Judge(double a, double b)
{
	//读取浮点数的时候要下边这样写
	scanf_s("%lf %lf", &a, &b);
	//将二次方写为两个数相乘
	double BMI = (a / (b*b));
	if (BMI >= 18.5 && BMI <= 23.9){
		printf("Normal\n");
	}
	else{
		printf("Abnormal\n");
	}
}
int main()
{
	//Judgmentcharacter();
	Judge(50, 1.58);
	system("pause");
	return 0;
}