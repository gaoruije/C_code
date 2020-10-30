#include <stdio.h>
#include <windows.h>
//这里我们先写一个打印数组的函数，一会直接调用直接进行打印。
int Print(int arr[], int n)
{
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
//1，函数实现冒泡排序,按照升序的要求来排序
void BubbleSort(int arr[],int size)//函数的参数有数组和数组的长度。
{
	int temp = 0;
	for (int i = 0; i < size - 1; i++){//最后一遍不用比较。
		for (int j = 0; j < size - 1 - i; j++){//因为i每一次都会进行加，所以j是随着i变化的。
			if (arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	////上边已经把顺序排好了，下边我们直接进行打印
	////后边在调用的时候就能直接使用了，不用每次都给底下写打印方法。
	//for (int i = 0; i < size; i++){
	//	printf("%d ", arr[i]);
	//}
}
//2，函数法实现数组逆序
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

//3，函数法实现二分查找
int BinarySearch(int arr[], int size, int toFind)
{
	int left = 0;
	int right = size - 1;
	 while(left <= right){
		int mid = left + (right - left) / 2;
		if (toFind < arr[mid]){
			//在右边找
			left = mid + 1;
		}
		else if (toFind > arr[mid]){
			//在左边找
			right = mid + 1;
		}
		else{
			return mid;
		}
	}
	 return -1;
}
//4，实现一个函数，来完成两个数的最大公约数
//法a：辗转相除法，可以按递归来进行。
int GCD(int m,int n)
{
	if (m % n == 0){
		return n;
	}
	else{
		return GCD(n, m % n);
	}
}
//法b：
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
		printf("没有找到！");
	}
	else{
		printf("你要找的数组的下标是:%d",n);
	}*/
	printf("你输入的两个数字的最大公约数是：%d\n", GCD1(24, 18));
	system("pause");
	return 0;
}