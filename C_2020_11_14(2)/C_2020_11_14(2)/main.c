#include <stdio.h>
#include <windows.h>
//1,�Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд�������ַ����YES,�������NO.
//�������룬���������ÿ���������һ���ַ���
void Judgmentcharacter()
{
	char ch;
	while (scanf_s("%c", &ch) != EOF ){
		if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A')){
			printf("YES\n");
			getchar();//ÿ������һ�κ󶼻�����ٴζ�ȡ�ַ��Ĳ���
		}
		else{
			printf("NO\n");
			getchar();//ÿ������һ�κ󶼻�����ٴ�ȡ�ַ��Ĳ���
		}
	}
}
//2���ж�һ���˵Ľ���״����BMI=(����/(��ߵ�ƽ��))��18.5~23.9����������������
void Judge(double a, double b)
{
	//��ȡ��������ʱ��Ҫ�±�����д
	scanf_s("%lf %lf", &a, &b);
	//�����η�дΪ���������
	double BMI = (a / (b*b));
	if (BMI >= 18.5 && BMI <= 23.9){
		printf("Normal\n");
	}
	else{
		printf("Abnormal\n");
	}
}
int main()
{
	//Judgmentcharacter();
	Judge(50, 1.58);
	system("pause");
	return 0;
}