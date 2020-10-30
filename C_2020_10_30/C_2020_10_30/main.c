#include <stdio.h>
#include <windows.h>
//����������дһ����ӡ����ĺ�����һ��ֱ�ӵ���ֱ�ӽ��д�ӡ��
int Print(int arr[], int n)
{
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
//1������ʵ��ð������,���������Ҫ��������
void BubbleSort(int arr[],int size)//�����Ĳ��������������ĳ��ȡ�
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++){//���һ�鲻�ñȽϡ�
		for (int j = 0; j < size - 1 - i; j++){//��Ϊiÿһ�ζ�����мӣ�����j������i�仯�ġ�
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	////�ϱ��Ѿ���˳���ź��ˣ��±�����ֱ�ӽ��д�ӡ
	////����ڵ��õ�ʱ�����ֱ��ʹ���ˣ�����ÿ�ζ�������д��ӡ������
	//for (int i = 0; i < size; i++){
	//	printf("%d ", arr[i]);
	//}
}
//2��������ʵ����������
void ArrayReverse(int arr[], int size)
{
	int left = 0;
	int right = size - 1;
	int temp;
	while (left < right){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

//3��������ʵ�ֶ��ֲ���
int BinarySearch(int arr[], int size, int toFind)
{
	int left = 0;
	int right = size - 1;
	 while(left <= right){
		int mid = left + (right - left) / 2;
		if (toFind < arr[mid]){
			//���ұ���
			left = mid + 1;
		}
		else if (toFind > arr[mid]){
			//�������
			right = mid + 1;
		}
		else{
			return mid;
		}
	}
	 return -1;
}
//4��ʵ��һ������������������������Լ��
//��a��շת����������԰��ݹ������С�
int GCD(int m,int n)
{
	if (m % n == 0){
		return n;
	}
	else{
		return GCD(n, m % n);
	}
}
//��b��
int GCD1(int m, int n)
{
	int i;
	for ( i = m; i > 2; i--){
		if (m % i == 0 && n % i == 0){
			break;
		}
	}
	return i;
}
int main()
{
	/*int arr[] = { 9, 5, 2, 7, 3, 6, 8, 1, 4, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);*/
	/*BubbleSort(arr, size);
	Print(arr, size);*/
	/*for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}*/
	/*ArrayReverse(arr size);
	Print(arr, size);*/
	/*int arr1[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int n = BinarySearch(arr1, size1, 9);
	if (n == -1){
		printf("û���ҵ���");
	}
	else{
		printf("��Ҫ�ҵ�������±���:%d",n);
	}*/
	printf("��������������ֵ����Լ���ǣ�%d\n", GCD1(24, 18));
	system("pause");
	return 0;
}