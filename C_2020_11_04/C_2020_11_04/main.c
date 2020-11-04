#include <stdio.h>
#include <windows.h>
//1，交换两个变量
void exchange(int m, int n)
{
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;
	printf("%d,%d\n", m, n);
}
//2，求二进制中1的个数
void numberof_1(int m)
{
	int count = 0;
	int i = 32;
	int result = 0;
	while (i > 0){
		if (m & (1 << 31)){//每一次都是在最右边按位与的
			count++;
		}
		i--;
		m <<= 1;
	}
	result = count;
	printf("%d\n", result);
}
void numberof_2(int m)
{
	int count = 0;
	int i = 32;
	int result = 0;
	while (i > 0){
		if (m & (1 << (32 - i))){
			count++;
		}
		i--;
	}
	result = count;
	printf("%d\n", result);
}
void numberof_3(int m)
{
	int count = 0;
	int result = 0;
	while (m){//还是要循环，用的是while而不是if，if只执行一次。
		m &= (m - 1);
		count++;
	}
	result = count;
	printf("%d\n", result);
}
//3,输出一个整数对应的二进制奇偶位
void print(int m)
{
	printf("所有的奇数位如下： ");
	for (int i = 30; i >= 0; i -= 2){//打印奇数位，注意的是1 的位置一定在最右边
		printf("%d  ", (m >> i) & 1);//这里要改变的是m的位置，依次向右移位
	}
	printf("\n所以的偶数位如下： ");

	for (int i = 31; i > 0; i -= 2){//打印偶数位，还是1一直在最右边
		printf("%d  ", (m >> i) & 1);
	}
}
int main()
{
	//exchange(10, 20);
	//numberof_3(-1);
	print(17);
	system("pause");
	return 0;
}