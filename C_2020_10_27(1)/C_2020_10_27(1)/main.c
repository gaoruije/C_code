#include <stdio.h>
#include <windows.h>
//1,�ú���ʵ��n n �˷���
void Show(int n)
{
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			printf("%d*%d = %2d  ", j, i, j*i);
		}
		printf("\n");
	}
}
//2,
int main()
{
	//���ó˷�����
	Show(9);
	system("pause");
	return 0;
}