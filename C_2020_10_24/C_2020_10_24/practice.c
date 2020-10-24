#include <stdio.h>
#include <windows.h>
# pragma warning(disable:4996)
#define M 7
//1，练习二分查找数组中的元素，如果有，返回数组的下标，没有就返回没有找到。
//切记二分查找的条件：数组必须是有序的。
int binsearch(int arr[],int size,int tofind)
{
	int left = 0;
	int right = size - 1;
	int mid;
	while (left <= right){
		mid = left + (right - left) / 2;//这个操作是防止溢出。
		if (tofind < arr[mid]){
			right = mid - 1;
		}
		else if (tofind > arr[mid]){
			left = mid + 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
//2,练习冒泡排序法，用降序来编写
void BubbleSort(int arr[])
{
	int temp;
	for (int i = 0; i < M - 1; i++){
		for (int j = 0; j < M - 1 - i; j++){
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void BubbleSort1(int arr[],int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++){
		for (int j = 0; j < size - 1 - i; j++){
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void print(int arr[], int size)
{
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//3,打印给定位置内的所有的素数
void PrintPrime(int start, int end)
{
	int i = 0;
	int j = 0;
	int count = 0;
	printf("在你所输入的范围内的素数是：");
	for ( i = start; i < end; i++){
		for ( j = 2; j <= (i/2); j++){
			if (i % j == 0){
				break;
			}
		}
		if (j >= (i/2)){//这里一定要进行判定，当j的值>i/2 的时候就可以停了，直接输出素数。
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("素数的个数是：%d \n", count);
}
//4,求两个数的最大公约数,辗转相除法。
//int GCD(int m, int n)
//{
//	int t = 0;
//	while (0 != m % n){
//		m = n;
//		n = m % n;
//	}
//	return n;
//}
//**法a:
int Gcd(int x, int y)
{
	int i;
	for (i = x; i >= 1; i--){
		if (x % i == 0 && y % i == 0){//说明找见了最大公约数就是i,现在就得出循环了。
			break;
		}
	}
	return i;
}
//法b:
//根据辗转相除法可知，当余数为0的时候就说明最大公约数已经出现了,当余数为0的时候结束循环。
int gcd(int m, int n)
{
	int temp;
	while (n){
		//以下的次序不能交换
		temp = n;//先将被除数赋值给临时变量
		n = m % n;//在将余数赋值给被除数
		m = temp;//将临时变量赋值给除数
	}
	return m;
}
//5，非递归法求N的阶乘
int fact(int n)
{
	int i = 1;
	int sum = 1;
	for (i = n; i > 1; i--){
		 sum *= i;
	}
	return sum;//只有循环玩所有的数字后才能打印你最终想要的结果。
}
//6,递归的方法实求N的阶乘。
int fact1(int n)
{
	if (n == 0 || n == 1){
		return 1;
	}
	else{
		return n * fact1(n - 1);
	}
}

int main()
{
	/*int arr[] = {11,22,33,44,55,66,77,88,99,100};
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret = binsearch(arr, size, 88);
	if (ret == (-1)){
		printf("没有找到!\n");
	}
	else{
		printf("你要找的数组下标是：%d \n", ret);
	}*/
	/*printf("请输入你要排序的M个数字：\n");
	int arr[M];
	int i;
	for ( i = 0; i < M; i++){
		scanf("%d", arr[i]);
	}
	BubbleSort(arr);
	printf("排序后的结果是：\n");
	for (int i = 0; i < M; i++){
		printf("%d", arr[i]);
	}*/
	/*int arr[] = { 9, 5, 2, 7, 3, 6, 8 };
	printf("排序之前的数组排列：");
	print(arr, 7);
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort1(arr, size);
	printf("排序之后的数组排列：");
	print(arr, 7);*/
	//PrintPrime(100,200);
	//printf("最大公约数是： %d\n", gcd(36,108));
	printf("阶乘的结果是：%d\n",fact1(6));
	system("pause");
	return 0;
}