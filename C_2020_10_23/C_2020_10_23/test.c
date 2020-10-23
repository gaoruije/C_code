#include <stdio.h>
#include <windows.h>

//#define n 10
//void BubbleSort(int arr[])
//{
//	for (int bound = 0; bound < n - 1; bound++){
//		for (int cur = 0; cur < n - bound - 1; cur++){
//			if (arr[cur] > arr[cur + 1]){
//				int temp;
//				temp = arr[cur];
//				arr[cur] = arr[cur + 1];
//				arr[cur + 1] = temp;
//			}
//		}
//	}
//}
//1,创建一个整形数组，完成对数组的操作

//a,实现函数init() 初始化数组为全0
void init(int arr[],int n)
{
	for (int i = 0; i < n; i++){
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}
//b,实现print()  打印数组的每个元素
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
//c,实现reverse()  函数完成数组元素的逆置。
void reverse(int arr[], int n)
{
	printf("数组逆置结果如下：\n");
	int temp;
	int left = 0;
	int right = n - 1;
	while (left < right){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	if (left = right){
		for (int i = 0; i < n; i++){
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}
//2,交换两个数组中的内容
void exchange_arr(int arr[],int arr1[],int arr2[],int n)
{
	for (int i = 0; i < n; i++){
		arr2[i] = arr[i];
		arr[i] = arr1[i];
		arr1[i] = arr2[i];
	}
	printf("arr是：");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("arr1是：");
	for (int i = 0; i < n; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
}
//3,非递归实现strlen
int strlen(char *str)
{
	int count = 0;
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}
//4,写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
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
////5,递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n > 9){
//		print( n / 10);
//		printf("%d ", n % 10);
//	}
//}
//6:a,用非递归求阶乘
int fact(int n)
{
	int sum = 1;
	if (n == 0 || n == 1){
		return 1;
	}
	else{
		for (int i = n; i > 1; i--){
			 sum *= i;
		}
	}
	return sum;
}
//6:b,用递归求阶乘
int fact_1(int n)
{
	if (n <= 1){
		return 1;
	}
	else{
		return n * fact_1(n - 1);
	}
}


int main()
{
	int arr[n];
	printf("请输入你所要排序的数字\n");
	for (int i = 0; i < n; i++){
		scanf("%d ", arr[i]);
	}
	BubbleSort(arr);
	printf("排序后的结果是：\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	//printf("\n");
	//1，创建一个整形数组
	int arr[] = { 9, 5, 2, 7, 3, 6, 8, 1, 4, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//a,给数组初始化，让它全为0；
	init(arr, n);
	printf("\n");
	//b,打印数组的每一个元素。
	print(arr, n);
	//c,给数组逆置
	reverse(arr, n);
	int temp;
	int left = 0;
	int right = n - 1;
	while (left < right){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	/*int arr[5] = { 1, 2, 3, 4, 5 };
	int arr1[5] = { 6, 7, 8, 9, 0 };
	int arr2[5] = {0,0,0,0,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	exchange_arr(arr, arr1, arr2, n);*/
	/*int m = DigitSum(1234);
	printf("%d ", m);*/
	//print(1234);
	printf("最后的结果是：%d \n", fact_1(6));
	system("pause");
	return 0;
}