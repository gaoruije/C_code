#include <stdio.h>
#include <windows.h>
//1,用函数实现n n 乘法表
void Show(int n)
{
	for (int i = 1; i <=n; i++){
		for (int j = 1; j <=i; j++){
			printf("%d*%d = %2d  ", j, i, j*i);
		}
		printf("\n");
	}
}
//2,
int main()
{
	//调用乘法表函数
	Show(9);
	system("pause");
	return 0;
}