#include <stdio.h>
#include <windows.h>
#define M 5
//�Ӽ�������5��ѧ���ĳɼ����������������ǵ�ƽ���ɼ���������������һλС����
void Ary()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	double result = (double)(a + b + c + d + e) / 5;//ҪǿתΪdouble��
	//��ΪҪ�������һλС������lf����ӡ�����߸����Ǽ����Ǵ�ӡ��λС����
	printf("%.1lf", result);//��ӡ����1λС����
}
//2,����һ��ʮ��������a����һ���˽�����b�����a + b��ʮ���ƽ������Χ - 231~231 - 1����
void Sum()
{
	int a, b, sum;
	//�±�Ҫע���ȡʮ�����ƺͰ˽��ƵĹ���
	//16������0x%x;8������0%o.
	scanf_s("0x%x 0%o", &a, &b);
	printf("%d", a + b);
}
int main()
{
	//Ary();
	Sum();
	system("pause");
	return 0;
}