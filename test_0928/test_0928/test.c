#include<stdio.h>
#include<windows.h>

//函数的声明和定义,为了一会进行调用。
//int Myadd(int a, int b)//这里的a,b是形参，函数名称驼峰命名法
//{
//	int res = a + b;
//	return res;
//}
//#define SIZE 5//宏定义
//int Max(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//写了一个show方法
void show(){
	//int i = 0;//i 是临时变量具有临时性
	static int i = 0;//static 在修饰局部变量的时候有两个作用。
	//1，作用域：在代码内有效，用static 修饰，这个作用不变。
	//2,生命周期：本来具有临时性，static修饰，则该变量的生命周期变成了全局变量
	//3，注意 int i = 0；是初始化任何一个变量都只会初始化一次。
	++i;
	printf("i：%d\n", i);
}
int main()
{
	for (int i = 0; i <= 10; i++){
		show();
	}
//	int a = 20;
//	int b = 10;
//	printf("%d\n", Max(a,b));
	//int a = 10;
	//int b = 20;
	//int result = Myadd(a, b);//这里的a,b是实参
	//printf("before: a：%p,b: %p\n", &a, &b);
	//printf("result:%d\n", result);

	//int arr[SIZE];
	////数组的定义与初始化
	//int arr1[SIZE] = { 1, 2, 3, 4, 5 };//这里是给数组给了特定值。
	//for (int i = 0; i < SIZE; i++){
	//	printf("arr1[%d]:%d\n", i, arr1[i]);
	//1,求数组的个数代码
	/*int arr[] = { 1, 2, 3, 4, 5 };
	printf("%d \n", sizeof(arr));
	printf("%d \n", sizeof arr[0]);
	int num = sizeof(arr) / sizeof arr[0];
	printf("%d \n", num);*/
	//2，将10转换成2进制,，位运算，左右移。
	//int a = 10;
	//printf("%d\n", a >> 1);//右移一位,相当于\2
	//printf("%d\n", a << 1);//左移一位，相当于*2
	system("pause");
	return 0;
}