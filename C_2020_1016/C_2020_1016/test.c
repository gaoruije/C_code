# include<stdio.h>
# include<windows.h>

//1,二分法查找指定元素,找到则返回下标，否则返回找不到,这里查找的数字是44.
//先写二分查找的函数，一会直接进行调用即可。
int Binarysearch(int arr[], int toFind, int n){//创建一个函数，要标明返回值，类型，还有具体的参数。
	int left = 0;
	int right = n - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (toFind < arr[mid]){//说明要找的元素在数组的左侧
			right = mid - 1;
		}
		else if (toFind > arr[mid]){//说明要找的元素在数组的右边
			left = mid + 1;
		}
		else{//说明找见了，返回mid
			return mid;
		}
	}
	return -1;//就说明没有找见，返回-1，要是返回0，会和数组的下标冲突。
}

int main(){
	int arr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	int toFind = 44;
	int n = (sizeof(arr) / sizeof(arr[0]));//这里计算的是数组的长度。
	int result = Binarysearch(arr, toFind, n);//调用方法的时候，也要标明定义的那一块东西。
	if (result == -1){//说明没有找见，否则找见了。
		printf("找不到 \n");
	}
	else{
		printf("要找的数字的下标是：%d", result);
	}
	int m;
	int n;
	printf("请输入两个整形数字：\n");
	scanf_s("%d%d\n", &m, &n);
	Max(m, n);//因为那个Max函数中已经出现过打印了，所以这里就不用接收了。
	//3,进行一个猜数字游戏。
	//a,先得生成一个随机数,这个还没学呢！！！
	int arr[100];
	int i = 0;
	int n = 100;
	for (int i = 0; i < n; i++){
		scanf_s("%d \n", &arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
//2,用函数的方式来实现以下输入任意两个数字，来比较谁大，并返回
//a,先编写输出较大值得函数
int Max(int a, int b){
	if (a < b){
		printf("较大值是：%d\n", b);
	}
	else{
		printf("较大值是：%d\n", a);
	}
}