#include <stdio.h>
#include <windows.h>
#include <math.h>
//1,��һ����λ�������������
//https://www.nowcoder.com/practice/1f7c1d67446e4361bf4af67c08e0b8b0?tpId=107&tqId=33298&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking
int print()
{
	int a;
	scanf_s("%d", &a);
	int arr[4];
	    arr[0] = a % 10;
		arr[1] = (a / 10) % 10;
		arr[2] = (a / 100) % 10;
		arr[3] = a / 1000;
		for (int i = 0; i < 4; i++){
			printf("%d", arr[i]);
		}
		printf("\n");
}
//2,������������,�����������ĺ�
//https://www.nowcoder.com/practice/bcaf710fb58a44e1b678a890e6e90d7c?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
//1.ֻ���������������λ�����磺��KiKi��˵1234�ȼ���34
//������������ڵ��� 100�� ��ôKIKIҲ�������������������λ���������λ��ʮλΪ0����ֻ������λ��

int print1(int a, int b)
{
	scanf_s("%d %d", &a, &b);
	int sum = a + b;
	if (sum >= 100){
		sum %= 100;
		if (sum / 10 == 0){
			printf("%d", sum % 10);
		}
		else{
			printf("%d", sum);
		}
	}
	else{
		printf("%d\n", sum);
	}
}
	//3,����һ����������Ҫ��õ��ø������ĸ�λ����
	//https://www.nowcoder.com/practice/ffa94d27c6534396aef38813535c279f?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
int print2()
{
	double a;
	scanf_s("%lf", &a);//double�������lf
	printf("%d", (int)a % 10);//�Ը���������ǿ������ת��
}
//4,������������ת��Ϊ����
//һ��Լ��3.156��107s��Ҫ�������������䣬��ʾ������϶�����
//https://www.nowcoder.com/practice/e1d1bd99fee34b66ae3c777b74d555c8?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
//#include <math.h>
//�����ú�����ʾ  ��c������ ��x��y�η�����pow(x,y)��ʾ������10��N�η�Ҳ�ɱ�ʾΪpow(10,N),
//��Ҫע�����pow(x,y)�Ļ�Ҫ�õ�math.hͷ�ļ�
void Conversion()
{
	//��Ϊage����Ľ���ǳ������Ա������������long long int
	long long int age;
	//��ȡ����
	scanf_s("%lld", &age);
	//����pow(double_1,double_2),���Ա�ʾһ������N�η�
	int b = 3.156*pow(10, 7);
	age *= b;
	printf("%lld", age);
}

int main()
{
	Conversion();
	//print();
	/*int a, b;
	scanf_s("%d %d", &a, &b);
	print1(a, b);*/
	//print2();
	system("pause");
	return 0;
}