# include <stdio.h>
# include <windows.h>

#define M 10//�궨��һ�£�Ϊ���Ժ�仯����ķ�Χ�ܺ��޸Ĵ��롣
//1,ʵ��ð������,������ȥʵ�֡�
void BubbleSort(int arr[])
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (int i = 0; i < M; i++){
		for (int j = 0; j < M - i; j++){//��������Ϊiÿ�ζ��Ǳ��
			if (arr[j] < arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//�����û��ڼ���������10��ֵ
	int i;
	int arr1[M];
	printf("����������Ҫ������������֣�\n");
	for (int i = 0; i < M; i++){
		scanf_s("%d ", &arr1[M]);
		BubbleSort(arr1);
	}
	//�ڵ�������֮��Ҫ���û����ֳ������յĽ��������Ҫ��ӡ��ע���ӡ����arr[j]
	printf("����������֮��ģ�\n");//�ϱߵ������в�����������j��ֵ�����Ե���Ҫ��ӡJ��
	for (int j = 0; j < M; j++){
		printf("%d ", arr1[j]);
	}
	//��ӡ100~200֮�����������
		int j;
		for (int i = 100; i <= 200; i++){
			for (j = 2; j < (i) / 2; j++){
				if (i % j == 0){
					break;
				}
			}
			if (j >= (i / 2)){
				printf("%d ", i);
			}
		}
	printf("\n");
	system("pause");
	return 0;
}