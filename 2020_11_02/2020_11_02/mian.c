#include <stdio.h>
#include <windows.h>
//1,不创建临时变量交换两个数字的值
//法a：看起来很时尚，但是可能出现越界现象
void exchange(int m, int n)
{
	printf("m = %d,  n = %d\n", m, n);
	m = m + n;
	n = m - n;
	m = m - n;
	printf("m = %d,  n = %d\n", m, n);
}
//法b:用按位异或来计算
void exchange_1(int m, int n)
{
	printf("m = %d, n = %d\n", m, n);
	m = m ^ n;
	n = m ^ n;//就是m ^ n ^ n,最终的结果就是m
	m = m ^ n;//同理
	printf("m = %d, n = %d\n", m, n);
}
//2,求一个整数的二进制在存储中1的个数
//法a,只能解决正数,负数的符号位一直是1.所以循环会一直进行
void Find_number_of_1(int m)
{
	int count = 0;
	int result = 0;
	while (m){
		if (m & 1){//表示检测最低位，是1的话结果是1，进入循环
			count++;//表示检测到了1，count进行++。
		}
		m >>= 1;//m进行右移，依次循环进行
	}
	result = count;
	printf("你所输入的数字转化为二进制后1的个数是：%d\n", result);
}
//法b，兼容整数和负数，思路是让1来检测最高位
void Find_number_of_2(int m)
{
	int count = 0;
	int i = 32;
	int result = 0;
	while (i > 0){//循环32次，因为要比较32次
		if (m & (1 << 31)){//先将1左移上31位就是1，此时在最高位了
			count++;
		}
		m <<= 1;//每一次左移一位
		i--;
	}
	result = count;
	printf("%d\n", result);
}
//法c:兼容正数和负数，思路：先检测最高位，然后依次移动1的位置，依次向下检测
void Find_number_of_3(int m)
{
	int i = 32;
	int result = 0;
	int count = 0;
	while (i > 0){
		if (m & (1 << (i - 1))){
			count++;
		}
		i--;
	}
	result = count;
	printf("%d\n", result);
}
//法d:用整体来与计算,循环与到最后，m一定会变为0.效率最高，兼容正负数
void Find_number_of_4(int m)
{
	int count = 0;
	int result = 0;
	while (m){//当m不为0的时候，循环进行
		m &= (m - 1);//每进行一次，就会去掉一个1
		count++;
	}
	result = count;
	printf("%d\n", result);
}
//3,求两个数二进制中不同位的个数
//思路：先对两个数进行异或得到的1的个数就是不同位的个数，再计算1的个数就行了。
void Different_number(int m, int n)
{
	int count = 0;
	int result = 0;
	int temp = m ^ n;//得到的就是含有1的个数就是不同位的个数
	//对temp进行计算它里边1的个数
	while (temp){
		temp &= (temp - 1);//每进行一次这个，就消去一个1的个数
		count++;
	}
	result = count;
	printf("你输入的两个数字中不同位的个数是：   %d\n", result);
}
int main()
{
	/*exchange(10, 20);
	exchange_1(1, 100);*/
	/*Find_number_of_4(-1);*/
	Different_number(1999,2299);
	system("pause");
	return 0;
}
