#include <stdio.h>
#include <windows.h>
//1:a,非递归实现strlen

int strlen(char *str)
{
	int count = 0;
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}

//1:b,递归实现求字符串长度。

int strlen1(char *str)
{
	if (*str == '\0'){
		return 0;
	}
	else{
		return 1 + strlen(1 + str);
	}
}
//2:a写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

int DigitSum(n)
{
	int m;
	if (n >= 10){
		return (n % 10) + DigitSum(n / 10);
	}
	else{
		return n;
	}
}
//2:b用非递归实现，输入一个非负整数，返回组成它的数字之和
int DigitSum1(n)
{
	int sum = 0;
	int m = 0;
		while (n > 0){
			m = n % 10;
			sum += m;
			n = n / 10;
		}
		return sum;
}

int main()
{
	printf("结果是：%d \n", DigitSum1(123456789));
	system("pause");
	return 0;
}