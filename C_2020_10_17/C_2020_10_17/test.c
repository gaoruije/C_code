# include<stdio.h>
# include<windows.h>

//1���������������ö��ַ�����ĳ������Ԫ�ص��±꣬������򷵻�Ԫ�ص��±꣬
//���򷵻�û���ҵ���
//a,������дһ���������±�ֱ�ӵ��ú�����
int Binarysearch(int arr[], int toFind, int n)//���ú����Ĳ���,�±�Ҫ������ĳ��ȣ�����Ҫ���峤�Ȳ���
{
	int left = 0;
	int right = n - 1;//������±��Ǵ�0��ʼ�ģ�����nҪ-1.
	while (left <= right){
		int mid = (left + right) / 2;
		if (toFind < arr[mid]){//˵��Ҫ�ҵ�Ԫ�����������ߣ�����right��
			right = mid - 1;
		}
		else if (toFind > arr[mid]){//˵����Ҫ�ҵ�Ԫ����������ұߣ�����left��
			left = mid + 1;
		}
		else{
			return mid;//˵���ҵ��ˡ�
		}
	}
	return -1;//Ϊ�˲���������±��ͻ���� -1.
}


int main()
{
	int arr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 1233 };
	int n = sizeof(arr) / sizeof(arr[0]);//�����������ĳ��ȡ�
	int toFind = 66;
	int result = Binarysearch(arr, toFind, n);
	if (result == -1)//˵��û���ҵ�һ��ע�⣬�������Ⱥţ���ʾ�Ĳ����жϡ�
	{
		printf("û���ҵ�\n");
	}
	else
	{
		printf("��������Ԫ�ص��±��ǣ�%d \n", result);
	}
	//2,���9*9�˷��ھ���
	//˼·��һ����������Ϊ������һ������Ϊ����
	int i;
	int j;
	for (i = 1; i <= 9; i++){//������i����=���Ƶ�������
		for (int j = 1; j < i + 1; j++){//��j ������������
			//printf("%d*%d = %d  ", j, i, j*i);//���������Բ��롣
			printf("%2d *%2d = %2d  ", j, i, j*i);//%2d�ǽ����ֵĿ�ȱ�Ϊ2�������Ҷ���ķ�ʽ���д�ӡ�ģ�
			                 //�����ݵĿ�Ȳ���2λ������߲�0,ϸ�ڸ���һ������ǰ�߼��Ͽո����ȫ�����ˡ�
		}
		printf("\n");
	}
		system("pause");
		return 0;
}