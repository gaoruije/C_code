#include <stdio.h>
#include <windows.h>
#define M 50//杨辉三角的行数和列数都是一样的，要是后边改变打印的行数直接换M的值就行了
//关于每一行的最后一个1，虽然上一行的最后一个元素的下一个元素没有值，但是在下边计算的时候给的值是0
void YangHuitriangle(int n)
{
	int i = 0;
	int j = 0;
	int arr[M][M] = { 1 };//先给二维数组初始化一下，后边的机组按都是在1的基础下计算的
	//a,观察发现每一行的首元素都是1，所以先把每一行的首元素打印出来
	for (int i = 0; i < n; i++){
		arr[i][0] = 1;
		//b,打印每一行的内部的元素
		for (int j = 1; j < i + 1; j++){//上边已经打印好每一行的首元素了，所以j直接从第二个元素开始
			//有杨辉三角的规律可知，i行的第j个元素的值是i-1行的j-1和j的数字之和
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	//上边已经将元素排列好了，下边直接进行打印即可
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i + 1; j++){
			printf("%2d ", arr[i][j]);
		}
		printf("\n");//每打印完一行进行换行
	}
}

void LookingtheKiller()
//是凶手的用1来表示，不是凶手的用0表示
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//真话用1来表示，假话用0来表示
{
	int killer;
	//从A到D依次遍历，只要满足那个条件了就直接输出凶手
	for (killer = 'A'; killer <= 'D'; killer++){
		//这里的条件只要三个成立（和为3），就说明上边遍历的凶手就是哪个
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3))
			printf("凶手是: %c\n", killer);
	}
}
//void YangHuitriangle1(int n)
//{
//	int arr[M][M] = { 1 };
//	for (int i = 0; i < n; i++){
//		arr[i][0] = 1;
//		for (int j = 1; j < i+1; j++){
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < i + 1; j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
int main()
{
	LookingtheKiller();
	YangHuitriangle(8);
	system("pause");
	return 0;
}