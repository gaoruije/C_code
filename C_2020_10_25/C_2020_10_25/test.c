#include <stdio.h>
#include <windows.h>
//1:a,�ǵݹ�ʵ��strlen

int strlen(char *str)
{
	int count = 0;
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}

//1:b,�ݹ�ʵ�����ַ������ȡ�

int strlen1(char *str)
{
	if (*str == '\0'){
		return 0;
	}
	else{
		return 1 + strlen(1 + str);
	}
}
//2:aдһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

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
//2:b�÷ǵݹ�ʵ�֣�����һ���Ǹ����������������������֮��
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
	printf("����ǣ�%d \n", DigitSum1(123456789));
	system("pause");
	return 0;
}