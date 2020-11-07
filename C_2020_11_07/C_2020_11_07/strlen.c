#include <stdio.h>
#include <windows.h>
#define M 10
//模拟实现strlen函数,见到"\0"结束,否则进行加一操作
//a,递归实现
int myStrlen(char *str)
{
	if (*str == "\0"){
		return 0;
	}
	else{
		return 1 + myStrlen(str + 1);//指向下一个元素
	}
}
//b,用指针相加法来计算
int myStrlen1(char *str)
{
	char *p = str;//指针变量指向字符串的首地址
	while (*p){//碰见\0后，就不执行下边的语句了，\0在数值上就是0
		p++;//对地址进行加加
	}
	return p - str;//减完就是字符串的长度
}
//2,调整奇数偶数顺序,偶数在奇数的前边
void adjustOrder(int arr[],int size)
{
	int left = 0;
	int right = size - 1;
	int temp;
	while (left < right){//这里不用相等，在走到最中间的时候，肯定左边奇数，右边偶数，中间的偶数或者奇数无所谓了
		//见到奇数跳过，为了找偶数
		while ( left < right && (0 == arr[left] % 2)){
			left++;
		}
		//见到偶数跳过，这里为了找奇数
		while (left < right && (1 == arr[right] % 2)){
			right--;
		}
		//上边已经找到了，下边直接交换
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