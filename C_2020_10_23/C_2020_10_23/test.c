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
//1,����һ���������飬��ɶ�����Ĳ���

//a,ʵ�ֺ���init() ��ʼ������Ϊȫ0
void init(int arr[],int n)
{
	for (int i = 0; i < n; i++){
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}
//b,ʵ��print()  ��ӡ�����ÿ��Ԫ��
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
//c,ʵ��reverse()  �����������Ԫ�ص����á�
void reverse(int arr[], int n)
{
	printf("�������ý�����£�\n");
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
//2,�������������е�����
void exchange_arr(int arr[],int arr1[],int arr2[],int n)
{
	for (int i = 0; i < n; i++){
		arr2[i] = arr[i];
		arr[i] = arr1[i];
		arr1[i] = arr2[i];
	}
	printf("arr�ǣ�");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("arr1�ǣ�");
	for (int i = 0; i < n; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
}
//3,�ǵݹ�ʵ��strlen
int strlen(char *str)
{
	int count = 0;
	while (*str != '\0'){
		count++;
		str++;
	}
	return count;
}
//4,дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
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
////5,�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print(int n)
//{
//	if (n > 9){
//		print( n / 10);
//		printf("%d ", n % 10);
//	}
//}
//6:a,�÷ǵݹ���׳�
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
//6:b,�õݹ���׳�
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
	printf("����������Ҫ���������\n");
	for (int i = 0; i < n; i++){
		scanf("%d ", arr[i]);
	}
	BubbleSort(arr);
	printf("�����Ľ���ǣ�\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	//printf("\n");
	//1������һ����������
	int arr[] = { 9, 5, 2, 7, 3, 6, 8, 1, 4, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	//a,�������ʼ��������ȫΪ0��
	init(arr, n);
	printf("\n");
	//b,��ӡ�����ÿһ��Ԫ�ء�
	print(arr, n);
	//c,����������
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
	printf("���Ľ���ǣ�%d \n", fact_1(6));
	system("pause");
	return 0;
}