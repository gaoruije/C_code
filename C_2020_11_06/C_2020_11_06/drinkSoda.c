#include <stdio.h>
#include <windows.h>
#define M 2//�궨�壬������ƿ�ӻ�һƿ��ˮ��Ҫ���б������ֱ�Ӹ�M��ֵ����
//1,����ˮ���⣺����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����nԪ�����Զ�����ˮ�����ʵ�֣���
void drinkSoda(int amount, int price)//��ʾ�����Ǯ��������һƿ��ˮ�ĵ���
{
	int count = amount / price;//�����е�Ǯ�����ˮƿ��
	int empty = amount / price;//������ˮ�Ŀ�ƿ��
	while (empty > 1){
		count += empty / M;//��ż���Ļ�����ֱ�ӹ������������Ļ�Ҳ�ܼ���
		empty = empty / M + empty % M;//�����ϱ߻�����ˮ֮�⣬������ʣ��һ����ƿ��
	}
	printf("���ܹ��ܺ�%dƿ��ˮ\n", count);
}
int main()
{
	drinkSoda(20, 1);
	system("pause");
	return 0;
}