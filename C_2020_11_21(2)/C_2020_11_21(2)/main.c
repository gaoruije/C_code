#include <stdio.h>
#include <windows.h>
#define M 5
//1,���뼸�����֣���ƽ��ֵ����ӡ
//https://www.nowcoder.com/practice/b0e489a749f448e2b37f26ef56a76e58?tpId=107&&tqId=33353&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
int avg()
{
	float arr[5];
	float sum = 0.0;
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int j = 0; j < size; j++){
		scanf_s("%f", &arr[j]);
		sum += arr[j];
	}
	float result = sum / size;
	printf("%.2f\n", result);
}
//2,��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
//https://www.nowcoder.com/practice/04de8eb0ecab426fa6be3ae99af17210?tpId=107&&tqId=33367&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
int Statisticalparity()//�������ֽ���ż����ͳ��
{
	int number;
	int count_Odd = 0;
	int count_Even = 0;
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++){
		//ͳ��ż���ĸ���
		if (0 == i % 2){
			count_Even += 1;
		}
		if (1 == i % 2){
			count_Odd += 1;
		}
	}
	printf("%d %d", count_Odd, count_Even);
}
//3,����n�Ƴɼ�����������ʾ����ͳ�����е���߷֣���ͷ��Լ�ƽ���֡�
//https://www.nowcoder.com/practice/cad8d946adf64ab3b17a555d68dc0bba?tpId=107&tqId=33367&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking
int HighestlowestScore1()
{
	int n, i;
	float a[5], max = 0.0, min = 100.0, aver, sum = 0.00;
	scanf_s("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf_s("%f", &a[i]);
	}
	for (i = 0; i<n; i++)
	{
		if (max<a[i])
		{
			max = a[i];
		}
		if (min>a[i])
		{
			min = a[i];
		}
		sum += a[i];
	}
	aver = sum / n;
	printf("%.2f %.2f %.2f\n", max, min, aver);

}
int main()
{
	//avg();
	//Statisticalparity();
	HighestlowestScore1();
	system("pause");
	return 0;
}