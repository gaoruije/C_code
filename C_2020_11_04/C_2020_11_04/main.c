#include <stdio.h>
#include <windows.h>
//1��������������
void exchange(int m, int n)
{
	m = m ^ n;
	n = m ^ n;
	m = m ^ n;
	printf("%d,%d\n", m, n);
}
//2�����������1�ĸ���
void numberof_1(int m)
{
	int count = 0;
	int i = 32;
	int result = 0;
	while (i > 0){
		if (m & (1 << 31)){//ÿһ�ζ��������ұ߰�λ���
			count++;
		}
		i--;
		m <<= 1;
	}
	result = count;
	printf("%d\n", result);
}
void numberof_2(int m)
{
	int count = 0;
	int i = 32;
	int result = 0;
	while (i > 0){
		if (m & (1 << (32 - i))){
			count++;
		}
		i--;
	}
	result = count;
	printf("%d\n", result);
}
void numberof_3(int m)
{
	int count = 0;
	int result = 0;
	while (m){//����Ҫѭ�����õ���while������if��ifִֻ��һ�Ρ�
		m &= (m - 1);
		count++;
	}
	result = count;
	printf("%d\n", result);
}
//3,���һ��������Ӧ�Ķ�������żλ
void print(int m)
{
	printf("���е�����λ���£� ");
	for (int i = 30; i >= 0; i -= 2){//��ӡ����λ��ע�����1 ��λ��һ�������ұ�
		printf("%d  ", (m >> i) & 1);//����Ҫ�ı����m��λ�ã�����������λ
	}
	printf("\n���Ե�ż��λ���£� ");

	for (int i = 31; i > 0; i -= 2){//��ӡż��λ������1һֱ�����ұ�
		printf("%d  ", (m >> i) & 1);
	}
}
int main()
{
	//exchange(10, 20);
	//numberof_3(-1);
	print(17);
	system("pause");
	return 0;
}