#include <stdio.h>
#include <windows.h>
//1,����ʽ��ͼ��
//https://www.nowcoder.com/practice/5cd9598f28f74521805d2069ce4a108a?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
int show()
{
	int i = 0;
	for (i = 0; i < 6; i++){
		if ((i == 0) || (i == 1)){
			printf("     **     \n");
		}
		if ((i == 2) || (i == 3)){
			printf("************\n");
		}
		if ((i == 4) || (i == 5)){
			printf("    *  *    \n");
		}
	}
	return 0;
}
//2,//��һ��ʮ������ת��Ϊ��Ӧ�Ľ��ƣ�ע���ʽ
//https://www.nowcoder.com/practice/4ffcc9f206b949ddb057ee0099b34d51?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
//printf����ʹ��ʹ�ø�ʽ���ƴ���%o������%X���ֱ�����˽���������ʮ����������
//�ڰ˽���ǰ��ʾǰ��0����ʮ��������ǰ��ʾǰ��0X
int Binaryconversion()
{
	int a = 1234;
	printf("0%o 0X%X", a, a);
	printf("\n");
	return 0;
}
//3,
int main()
{
	//show();
	Binaryconversion();
	system("pause");
	return 0;
}