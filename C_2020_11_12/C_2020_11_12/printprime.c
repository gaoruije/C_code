#include <stdio.h>
#include <windows.h>
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
int NumberisPrime(int n)
{
	int i;
	for (i = 2; i < (n / 2); i++){
		if (n%i == 0){
			break;
		}
	}
	if (i == (n / 2)){
		printf("%d ",n);
	}
}
//�����������ֵ�����
void exchange(int m, int n)
{
	int temp = m ^ n;
	m = temp ^ m;
	n = temp ^ n;
	printf("%d  %d", m, n);
}
int main()
{
	/*int i = 0;
	for (i = 100; i <= 200; i++){
		NumberisPrime(i);
	}*/
	//exchange(10, 30);
	system("pause");
	return 0;
}