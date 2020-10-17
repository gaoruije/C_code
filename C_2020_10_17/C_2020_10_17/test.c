# include<stdio.h>
# include<windows.h>

//1，在有序数组中用二分法查找某个给定元素的下标，如果有则返回元素的下标，
//否则返回没有找到。
//a,这里先写一个函数，下边直接调用函数。
int Binarysearch(int arr[], int toFind, int n)//设置函数的参数,下边要用数组的长度，所有要定义长度参数
{
	int left = 0;
	int right = n - 1;//数组的下标是从0开始的，所以n要-1.
	while (left <= right){
		int mid = (left + right) / 2;
		if (toFind < arr[mid]){//说明要找的元素在数组的左边，更新right。
			right = mid - 1;
		}
		else if (toFind > arr[mid]){//说明了要找的元素在数组的右边，更新left。
			left = mid + 1;
		}
		else{
			return mid;//说明找到了。
		}
	}
	return -1;//为了不和数组的下标冲突设置 -1.
}


int main()
{
	int arr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 1233 };
	int n = sizeof(arr) / sizeof(arr[0]);//计算的是数组的长度。
	int toFind = 66;
	int result = Binarysearch(arr, toFind, n);
	if (result == -1)//说明没有找到一定注意，是两个等号，表示的才是判断。
	{
		printf("没有找到\n");
	}
	else
	{
		printf("所找数组元素的下标是：%d \n", result);
	}
	//2,输出9*9乘法口诀表
	//思路：一个变量设置为行数，一个设置为列数
	int i;
	int j;
	for (i = 1; i <= 9; i++){//这里用i来控=控制的是行数
		for (int j = 1; j < i + 1; j++){//用j 来控制列数。
			//printf("%d*%d = %d  ", j, i, j*i);//这样出来对不齐。
			printf("%2d *%2d = %2d  ", j, i, j*i);//%2d是将数字的宽度变为2，采用右对齐的方式进行打印的，
			                 //若数据的宽度不够2位，则左边补0,细节给第一个数字前边加上空格就完全对齐了。
		}
		printf("\n");
	}
		system("pause");
		return 0;
}