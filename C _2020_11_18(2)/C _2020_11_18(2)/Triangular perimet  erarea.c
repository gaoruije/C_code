#include <stdio.h>
#include <windows.h>
#include <math.h>
//�������������ܹ��������Σ����ܳ������,Ҫ������λС��
//https://www.nowcoder.com/practice/109a44d649a142d483314e8a57e2c710?tpId=107&tqId=33304&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking
int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	float C = a + b + c;//�ܳ���ֱ��ת������
	//���׹�ʽ�������
	//��������ú��׹�ʽ ��S=sqrt[p(p-a)(p-b)(p-c)]��p = (a+b+c)/2
	float p = (a + b + c) / 2.00;
	float area = sqrt(p*(p - a) * (p - b) * (p - c));
	printf("%.2f %.2f", C, area);
	system("pause");
	return 0;
}