#include <stdio.h>
#include <windows.h>
#define M 50//������ǵ���������������һ���ģ�Ҫ�Ǻ�߸ı��ӡ������ֱ�ӻ�M��ֵ������
//����ÿһ�е����һ��1����Ȼ��һ�е����һ��Ԫ�ص���һ��Ԫ��û��ֵ���������±߼����ʱ�����ֵ��0
void YangHuitriangle(int n)
{
	int i = 0;
	int j = 0;
	int arr[M][M] = { 1 };//�ȸ���ά�����ʼ��һ�£���ߵĻ��鰴������1�Ļ����¼����
	//a,�۲췢��ÿһ�е���Ԫ�ض���1�������Ȱ�ÿһ�е���Ԫ�ش�ӡ����
	for (int i = 0; i < n; i++){
		arr[i][0] = 1;
		//b,��ӡÿһ�е��ڲ���Ԫ��
		for (int j = 1; j < i + 1; j++){//�ϱ��Ѿ���ӡ��ÿһ�е���Ԫ���ˣ�����jֱ�Ӵӵڶ���Ԫ�ؿ�ʼ
			//��������ǵĹ��ɿ�֪��i�еĵ�j��Ԫ�ص�ֵ��i-1�е�j-1��j������֮��
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	//�ϱ��Ѿ���Ԫ�����к��ˣ��±�ֱ�ӽ��д�ӡ����
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i + 1; j++){
			printf("%2d ", arr[i][j]);
		}
		printf("\n");//ÿ��ӡ��һ�н��л���
	}
}

void LookingtheKiller()
//�����ֵ���1����ʾ���������ֵ���0��ʾ
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�滰��1����ʾ���ٻ���0����ʾ
{
	int killer;
	//��A��D���α�����ֻҪ�����Ǹ������˾�ֱ���������
	for (killer = 'A'; killer <= 'D'; killer++){
		//���������ֻҪ������������Ϊ3������˵���ϱ߱��������־����ĸ�
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3))
			printf("������: %c\n", killer);
	}
}
//void YangHuitriangle1(int n)
//{
//	int arr[M][M] = { 1 };
//	for (int i = 0; i < n; i++){
//		arr[i][0] = 1;
//		for (int j = 1; j < i+1; j++){
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < i + 1; j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
int main()
{
	LookingtheKiller();
	YangHuitriangle(8);
	system("pause");
	return 0;
}