#include <stdio.h>
#include <windows.h>
//1,��������ʱ���������������ֵ�ֵ
//��a����������ʱ�У����ǿ��ܳ���Խ������
void exchange(int m, int n)
{
	printf("m = %d,  n = %d\n", m, n);
	m = m + n;
	n = m - n;
	m = m - n;
	printf("m = %d,  n = %d\n", m, n);
}
//��b:�ð�λ���������
void exchange_1(int m, int n)
{
	printf("m = %d, n = %d\n", m, n);
	m = m ^ n;
	n = m ^ n;//����m ^ n ^ n,���յĽ������m
	m = m ^ n;//ͬ��
	printf("m = %d, n = %d\n", m, n);
}
//2,��һ�������Ķ������ڴ洢��1�ĸ���
//��a,ֻ�ܽ������,�����ķ���λһֱ��1.����ѭ����һֱ����
void Find_number_of_1(int m)
{
	int count = 0;
	int result = 0;
	while (m){
		if (m & 1){//��ʾ������λ����1�Ļ������1������ѭ��
			count++;//��ʾ��⵽��1��count����++��
		}
		m >>= 1;//m�������ƣ�����ѭ������
	}
	result = count;
	printf("�������������ת��Ϊ�����ƺ�1�ĸ����ǣ�%d\n", result);
}
//��b�����������͸�����˼·����1��������λ
void Find_number_of_2(int m)
{
	int count = 0;
	int i = 32;
	int result = 0;
	while (i > 0){//ѭ��32�Σ���ΪҪ�Ƚ�32��
		if (m & (1 << 31)){//�Ƚ�1������31λ����1����ʱ�����λ��
			count++;
		}
		m <<= 1;//ÿһ������һλ
		i--;
	}
	result = count;
	printf("%d\n", result);
}
//��c:���������͸�����˼·���ȼ�����λ��Ȼ�������ƶ�1��λ�ã��������¼��
void Find_number_of_3(int m)
{
	int i = 32;
	int result = 0;
	int count = 0;
	while (i > 0){
		if (m & (1 << (i - 1))){
			count++;
		}
		i--;
	}
	result = count;
	printf("%d\n", result);
}
//��d:�������������,ѭ���뵽���mһ�����Ϊ0.Ч����ߣ�����������
void Find_number_of_4(int m)
{
	int count = 0;
	int result = 0;
	while (m){//��m��Ϊ0��ʱ��ѭ������
		m &= (m - 1);//ÿ����һ�Σ��ͻ�ȥ��һ��1
		count++;
	}
	result = count;
	printf("%d\n", result);
}
//3,���������������в�ͬλ�ĸ���
//˼·���ȶ��������������õ���1�ĸ������ǲ�ͬλ�ĸ������ټ���1�ĸ��������ˡ�
void Different_number(int m, int n)
{
	int count = 0;
	int result = 0;
	int temp = m ^ n;//�õ��ľ��Ǻ���1�ĸ������ǲ�ͬλ�ĸ���
	//��temp���м��������1�ĸ���
	while (temp){
		temp &= (temp - 1);//ÿ����һ�����������ȥһ��1�ĸ���
		count++;
	}
	result = count;
	printf("����������������в�ͬλ�ĸ����ǣ�   %d\n", result);
}
int main()
{
	/*exchange(10, 20);
	exchange_1(1, 100);*/
	/*Find_number_of_4(-1);*/
	Different_number(1999,2299);
	system("pause");
	return 0;
}
