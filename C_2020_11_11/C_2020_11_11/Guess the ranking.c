#include <stdio.h>
#include <windows.h>
#define M 20
//题目要求：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
void GuesstheRanking()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int e = 1;
	//每一层嵌套的方式来进行。
	for (a = 1; a <= 5; a++){
		for (b = 1; b <= 5; b++){
			for (c = 1; c <= 5; c++){
				for (d = 1; d <= 5; d++){
					for (int e = 1; e <= 5; e++){
						if (((b == 2) + (a == 3)) && \
							((b == 2) + (e == 4)) && \
							((c == 1) + (d == 2)) && \
							((c == 5) + (d == 3)) && \
							((e == 4) + (a == 1)) ==1 ){
							printf("a = %d  b = %d  c = %d  d = %d  e = %d\n", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
}
//打印杨辉三角
void YanhuiTriangle(int n)
{
	//a:要是想打印数字，要在1的基础上进行计算的，所以先初始化数组
	int arr[M][M] = { 1 };
	//b:观察发现所有的每一行的第一个数字都是1，直接进行打印
	for (int i = 0; i < n; i++){
		arr[i][0] = 1;
		//c:打印每一行内部的元素,上边的每一行的第一个数字已经打印好了所以j直接从1开始
		for (int j = 1; j < i + 1; j++){
			//d:找规律发现每i行的第j个元素的值等于i-1行的第j-1的值加上j的值
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	//将数字计算完成后，进行输出
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i + 1; j++){//要注意j的范围，始终要和i一样的
			printf("%d ", arr[i][j]);
		}
		//每打印完一行进行换行操作
		printf("\n");
	}
}
int main()
{
	YanhuiTriangle(5);
	//GuesstheRanking();
	system("pause");
	return 0;
}