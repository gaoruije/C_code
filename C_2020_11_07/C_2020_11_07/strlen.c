#include <stdio.h>
#include <windows.h>
#define M 10
//ģ��ʵ��strlen����,����"\0"����,������м�һ����
//a,�ݹ�ʵ��
int myStrlen(char *str)
{
	if (*str == "\0"){
		return 0;
	}
	else{
		return 1 + myStrlen(str + 1);//ָ����һ��Ԫ��
	}
}
//b,��ָ����ӷ�������
int myStrlen1(char *str)
{
	char *p = str;//ָ�����ָ���ַ������׵�ַ
	while (*p){//����\0�󣬾Ͳ�ִ���±ߵ�����ˣ�\0����ֵ�Ͼ���0
		p++;//�Ե�ַ���мӼ�
	}
	return p - str;//��������ַ����ĳ���
}
//2,��������ż��˳��,ż����������ǰ��
void adjustOrder(int arr[],int size)
{
	int left = 0;
	int right = size - 1;
	int temp;
	while (left < right){//���ﲻ����ȣ����ߵ����м��ʱ�򣬿϶�����������ұ�ż�����м��ż��������������ν��
		//��������������Ϊ����ż��
		while ( left < right && (0 == arr[left] % 2)){
			left++;
		}
		//����ż������������Ϊ��������
		while (left < right && (1 == arr[right] % 2)){
			right--;
		}
		//�ϱ��Ѿ��ҵ��ˣ��±�ֱ�ӽ���
		if (left < right){
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
}
void print(int arr[], int size)
{
	for (int i = 0; i < size ; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[] = { 9, 5, 2, 7, 3, 6, 8, 1, 4, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	adjustOrder(arr, size);
	print(arr, size);
	system("pause");
	return 0;
}