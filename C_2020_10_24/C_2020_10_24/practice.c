#include <stdio.h>
#include <windows.h>
# pragma warning(disable:4996)
#define M 7
//1����ϰ���ֲ��������е�Ԫ�أ�����У�����������±꣬û�оͷ���û���ҵ���
//�мǶ��ֲ��ҵ��������������������ġ�
int binsearch(int arr[],int size,int tofind)
{
	int left = 0;
	int right = size - 1;
	int mid;
	while (left <= right){
		mid = left + (right - left) / 2;//��������Ƿ�ֹ�����
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
//2,��ϰð�����򷨣��ý�������д
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
//3,��ӡ����λ���ڵ����е�����
void PrintPrime(int start, int end)
{
	int i = 0;
	int j = 0;
	int count = 0;
	printf("����������ķ�Χ�ڵ������ǣ�");
	for ( i = start; i < end; i++){
		for ( j = 2; j <= (i/2); j++){
			if (i % j == 0){
				break;
			}
		}
		if (j >= (i/2)){//����һ��Ҫ�����ж�����j��ֵ>i/2 ��ʱ��Ϳ���ͣ�ˣ�ֱ�����������
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("�����ĸ����ǣ�%d \n", count);
}
//4,�������������Լ��,շת�������
//int GCD(int m, int n)
//{
//	int t = 0;
//	while (0 != m % n){
//		m = n;
//		n = m % n;
//	}
//	return n;
//}
//**��a:
int Gcd(int x, int y)
{
	int i;
	for (i = x; i >= 1; i--){
		if (x % i == 0 && y % i == 0){//˵���Ҽ������Լ������i,���ھ͵ó�ѭ���ˡ�
			break;
		}
	}
	return i;
}
//��b:
//����շת�������֪��������Ϊ0��ʱ���˵�����Լ���Ѿ�������,������Ϊ0��ʱ�����ѭ����
int gcd(int m, int n)
{
	int temp;
	while (n){
		//���µĴ����ܽ���
		temp = n;//�Ƚ���������ֵ����ʱ����
		n = m % n;//�ڽ�������ֵ��������
		m = temp;//����ʱ������ֵ������
	}
	return m;
}
//5���ǵݹ鷨��N�Ľ׳�
int fact(int n)
{
	int i = 1;
	int sum = 1;
	for (i = n; i > 1; i--){
		 sum *= i;
	}
	return sum;//ֻ��ѭ�������е����ֺ���ܴ�ӡ��������Ҫ�Ľ����
}
//6,�ݹ�ķ���ʵ��N�Ľ׳ˡ�
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
		printf("û���ҵ�!\n");
	}
	else{
		printf("��Ҫ�ҵ������±��ǣ�%d \n", ret);
	}*/
	/*printf("��������Ҫ�����M�����֣�\n");
	int arr[M];
	int i;
	for ( i = 0; i < M; i++){
		scanf("%d", arr[i]);
	}
	BubbleSort(arr);
	printf("�����Ľ���ǣ�\n");
	for (int i = 0; i < M; i++){
		printf("%d", arr[i]);
	}*/
	/*int arr[] = { 9, 5, 2, 7, 3, 6, 8 };
	printf("����֮ǰ���������У�");
	print(arr, 7);
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort1(arr, size);
	printf("����֮����������У�");
	print(arr, 7);*/
	//PrintPrime(100,200);
	//printf("���Լ���ǣ� %d\n", gcd(36,108));
	printf("�׳˵Ľ���ǣ�%d\n",fact1(6));
	system("pause");
	return 0;
}