# include <stdio.h>
# include <windows.h>

#define M 10//宏定义一下，为了以后变化数组的范围能好修改代码。
//1,实现冒泡排序,按降序法去实现。
void BubbleSort(int arr[])
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (int i = 0; i < M; i++){
		for (int j = 0; j < M - i; j++){//这里是因为i每次都是变的
			if (arr[j] < arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//先让用户在键盘上输入10个值
	int i;
	int arr1[M];
	printf("请你输入你要排序的所有数字：\n");
	for (int i = 0; i < M; i++){
		scanf_s("%d ", &arr1[M]);
		BubbleSort(arr1);
	}
	//在调用排序之后，要给用户呈现出来最终的结果，所以要打印，注意打印的是arr[j]
	printf("以下是排序之后的：\n");//上边的排序中操作的是所有j的值，所以底下要打印J。
	for (int j = 0; j < M; j++){
		printf("%d ", arr1[j]);
	}
	//打印100~200之间的所有素数
		int j;
		for (int i = 100; i <= 200; i++){
			for (j = 2; j < (i) / 2; j++){
				if (i % j == 0){
					break;
				}
			}
			if (j >= (i / 2)){
				printf("%d ", i);
			}
		}
	printf("\n");
	system("pause");
	return 0;
}