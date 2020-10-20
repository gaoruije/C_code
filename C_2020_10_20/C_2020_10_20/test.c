#include <stdio.h>
#include <windows.h>
int count = 0;
int fib(int n)
{
	if (n == 3){
		count++;//我们是来看一下3重复了多少次
	}
	if (n == 1 || n == 2){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
//int fib1 (int n);
//{
//	int first = 1;
//	int second = 1;
//	int thrid = 
//	while (n > 2){
//		third = first + second;
//		first = second;
//		second = third;
//		n--;
//	}
//	return third;
//}
int main()
{
	int n = 30;
	int res = fib(n);
	printf("%d\n", res);
	printf("%d\n", count);



	system("pause");
	return 0;
}