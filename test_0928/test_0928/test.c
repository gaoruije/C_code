#include<stdio.h>
#include<windows.h>

//�����������Ͷ���,Ϊ��һ����е��á�
//int Myadd(int a, int b)//�����a,b���βΣ����������շ�������
//{
//	int res = a + b;
//	return res;
//}
//#define SIZE 5//�궨��
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
//д��һ��show����
void show(){
	//int i = 0;//i ����ʱ����������ʱ��
	static int i = 0;//static �����ξֲ�������ʱ�����������á�
	//1���������ڴ�������Ч����static ���Σ�������ò��䡣
	//2,�������ڣ�����������ʱ�ԣ�static���Σ���ñ������������ڱ����ȫ�ֱ���
	//3��ע�� int i = 0���ǳ�ʼ���κ�һ��������ֻ���ʼ��һ�Ρ�
	++i;
	printf("i��%d\n", i);
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
	//int result = Myadd(a, b);//�����a,b��ʵ��
	//printf("before: a��%p,b: %p\n", &a, &b);
	//printf("result:%d\n", result);

	//int arr[SIZE];
	////����Ķ������ʼ��
	//int arr1[SIZE] = { 1, 2, 3, 4, 5 };//�����Ǹ���������ض�ֵ��
	//for (int i = 0; i < SIZE; i++){
	//	printf("arr1[%d]:%d\n", i, arr1[i]);
	//1,������ĸ�������
	/*int arr[] = { 1, 2, 3, 4, 5 };
	printf("%d \n", sizeof(arr));
	printf("%d \n", sizeof arr[0]);
	int num = sizeof(arr) / sizeof arr[0];
	printf("%d \n", num);*/
	//2����10ת����2����,��λ���㣬�����ơ�
	//int a = 10;
	//printf("%d\n", a >> 1);//����һλ,�൱��\2
	//printf("%d\n", a << 1);//����һλ���൱��*2
	system("pause");
	return 0;
}