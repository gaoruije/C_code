# include<stdio.h>
# include<windows.h>

//1,���ַ�����ָ��Ԫ��,�ҵ��򷵻��±꣬���򷵻��Ҳ���,������ҵ�������44.
//��д���ֲ��ҵĺ�����һ��ֱ�ӽ��е��ü��ɡ�
int Binarysearch(int arr[], int toFind, int n){//����һ��������Ҫ��������ֵ�����ͣ����о���Ĳ�����
	int left = 0;
	int right = n - 1;
	while (left <= right){
		int mid = (left + right) / 2;
		if (toFind < arr[mid]){//˵��Ҫ�ҵ�Ԫ������������
			right = mid - 1;
		}
		else if (toFind > arr[mid]){//˵��Ҫ�ҵ�Ԫ����������ұ�
			left = mid + 1;
		}
		else{//˵���Ҽ��ˣ�����mid
			return mid;
		}
	}
	return -1;//��˵��û���Ҽ�������-1��Ҫ�Ƿ���0�����������±��ͻ��
}

int main(){
	int arr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	int toFind = 44;
	int n = (sizeof(arr) / sizeof(arr[0]));//��������������ĳ��ȡ�
	int result = Binarysearch(arr, toFind, n);//���÷�����ʱ��ҲҪ�����������һ�鶫����
	if (result == -1){//˵��û���Ҽ��������Ҽ��ˡ�
		printf("�Ҳ��� \n");
	}
	else{
		printf("Ҫ�ҵ����ֵ��±��ǣ�%d", result);
	}
	int m ;
	int n;
	printf("�����������������֣�\n");
	scanf_s("%d%d\n", &m, &n);
	 Max(m, n);//��Ϊ�Ǹ�Max�������Ѿ����ֹ���ӡ�ˣ���������Ͳ��ý����ˡ�
	//3,����һ����������Ϸ��
	//a,�ȵ�����һ�������,�����ûѧ�أ�����
	int arr[100];
	int i = 0;
	int n = 100;
	for (int i = 0; i < n; i++){
		scanf_s("%d \n", &arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
//2,�ú����ķ�ʽ��ʵ���������������������֣����Ƚ�˭�󣬲�����
//a,�ȱ�д����ϴ�ֵ�ú���
int Max(int a, int b){
	if (a < b){
		printf("�ϴ�ֵ�ǣ�%d\n", b);
	}
	else{
		printf("�ϴ�ֵ�ǣ�%d\n", a);
	}
}