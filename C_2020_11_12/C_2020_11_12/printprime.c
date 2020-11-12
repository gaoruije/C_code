#include <stdio.h>
#include <windows.h>
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
int NumberisPrime(int n)
{
	int i;
	for (i = 2; i < (n / 2); i++){
		if (n%i == 0){
			break;
		}
	}
	if (i == (n / 2)){
		printf("%d ",n);
	}
}
//交换两个数字的内容
void exchange(int m, int n)
{
	int temp = m ^ n;
	m = temp ^ m;
	n = temp ^ n;
	printf("%d  %d", m, n);
}
int main()
{
	/*int i = 0;
	for (i = 100; i <= 200; i++){
		NumberisPrime(i);
	}*/
	//exchange(10, 30);
	system("pause");
	return 0;
}