#include <stdio.h>
#include <windows.h>
//�ַ�������
void reverse(char arr[], int size)
{
	int temp;
	int left = 0;
	int right = size - 1;
	while (left < right){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
 {
//	//C������������������������ȱʡ�������͵ľ��������е�
//	char a = 10;
//	char b = 20;
//	char c = 30;
//
//	a = b + c;//ʵ���������ʱ���Ƚ�b��c���������Σ�ռһ���ֽڣ�����Ϊ�ĸ��ֽڣ�Ȼ���ٽ��м����
//
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	int size = sizeof(arr);
	reverse(arr, size);
	for (int i = 0; i < size ; i++){
		printf("%d  ", arr[i]);
	}
	system("pause");
	return 0;
}