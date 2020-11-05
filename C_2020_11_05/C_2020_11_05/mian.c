#include <stdio.h>
#include <windows.h>
//字符串逆序
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
//	//C的整形算数运算总是至少以缺省整形类型的精度来进行的
//	char a = 10;
//	char b = 20;
//	char c = 30;
//
//	a = b + c;//实际在运算的时候先将b和c两个短整形（占一个字节）提升为四个字节，然后再进行计算的
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