#include <stdio.h>
#include <windows.h>
//����������ڵ������д���9�����ֵĸ���,4λ�������ڵ�
void FindthenumberWith(int m,int n)
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int count = 0;
	for (i = m; i <= n; i++){
		//˼·�������ó�һ����ֵ������λ���ķ��������ȳ���ģ��
		//a,������ÿһλ�����ж�
		a = (m / 1000) % 10;//�ȿ�ǧλ�Ƿ�9
		b = (m / 100) % 10;//����λ�Ƿ�9
		c = (m / 10) % 10;//��ʮλ�Ƿ�9
		d = m % 10;//����λ�Ƿ�9
		//b,�����ж�
		if ((a == 9) || (b == 9) || (c == 9) || (d == 9)){
			count++;
		}
	}
	printf("������ķ�Χ�ڴ���9�������� %d ��\n", count);
}
int main()
{
	FindthenumberWith(1990, 1993);
	system("pause");
	return 0;
}