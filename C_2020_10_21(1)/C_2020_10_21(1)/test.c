# include<stdio.h>
# include<windows.h>
//1,����ʵ���������ĺ���
void Primenumber(int start, int end){
	int i = 0;
	int j = 0;
	int count = 0;
	printf("����ȷ���ķ�Χ�µ������У�\n");
	for (int i = start; i <= end; i++){
		for (j = 2; j < i; j++){
			if (i % j == 0){//˵����������
				break;
			}
		}
		if (i == j){//�ϱ�һֱѭ����ֱ��i �� j��ȵ�ʱ�򣬾�˵�������ټ����ˣ������ҵ���
			printf("%d  ", i);
			count++;
		}
	}
	printf("\n");
	printf("���е������ĸ�����: %d   \n", count);
}
//2���ú���ʵ���ж�һ������ǲ�������
void is_leap(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0){
		printf("������\n");
	}
	else{
		printf("��������\n");
	}
}
//3,�ú�����ʵ�ֽ����������������ݡ�
void exchange(int m, int n)
{
	int tmp;
	tmp = m;
	m = n;
	n = tmp;
	printf("%d %d \n", m, n);
}
//4,��ӡ�˷��ھ���
void show()
{
	int i = 0;
	int j = 0;
	for (int i = 1; i < 10; i++){
		for (int j = 1; j < i + 1; j++){
			printf("%d*%d = %2d    ", j, i, j*i);
		}
		printf("\n");
	}
}
//5,�ݹ鷨ʵ�ִ�ӡһ��������ÿһλ��
void print(int n)
{
	if (n > 9){
		print(n / 10);
	}
	printf("%d ", n % 10);
}
//6:(a)�ݹ鷽����N�Ľ׳�
int fact(int n)
{
	if (n <= 2){
		return n;
	}
	return  n * fact(n - 1);
}
//6:(b)�ǵݹ鷽����n�Ľ׳ˡ�
void fact_1(int n)
{
	int sum = 1;
	if (n == 0 || n == 1){
		sum = 1;
	}
	for (int i = n; i > 1; i--){
		 sum = sum*i;
	}
	printf("�׳˵Ľ���ǣ� %d\n", sum);
}
//7,�ݹ�ʵ��n��k�η�,���ڵ�Kֻ������������0��������û���������
int cube(int n, int k)
{
	if (k == 0){
		return 1;
	}
	else{
		return n*cube(n, k - 1);
	}
}
//8:(a)�ǵݹ鷨ʵ�ֵ�n��쳲���������
int count = 0;
int fib(n)
{
	if (n == 3){
		count++;
	}
	int first = 1;
	int second = 1;
	int third = 1;
	for (int i = 3; i <= n; i++){
		first = second;
		second = third;
		third = first + second;
	}
	printf("��3ִ������ô��Σ�%d\n", count);
	printf("��Ҫ���쳲��������ǣ�%d\n", third);
}
//8:(b)�ݹ鷨��쳲���������
int count1 = 0;
int fib1(int n)
{
	if (n == 2){
		count1++;
	}
	if (n == 1 || n == 2){
		return 1;
	}
	else{
		return fib1(n - 1) + fib1(n - 2);
	}
}
int main()
{
	//1,��ӡ100~200֮������е�������
	//2,�ж�һ������ǲ������ꡣ
	//is_leap(400);
	//3,����������������
	//exchange(45,90);
	//4,չʾ�˷��ھ���
	//show();
	//5,��ӡ�������ֵ�ÿһλ
	//print(1234);
	//6,�ݹ�ʵ����N�Ľ׳ˡ�
	//printf("���ռ���Ľ׳˽���ǣ� %d\n", fact(5));
	//fact_1(2);
	//7,ʵ����N��K�η��ģ�����û�п��Ǹ�����
	//int ret = cube(2, 3);
	//printf("����ǣ�%d\n", ret);
	fib(10);//�����������Ǽ򵥵�ѭ��
	int n = 0;
	int res = fib1(40);
	printf("��Ҫ���쳲��������ǣ�%d\n", res);
	printf("��2���õĴ����ǣ�%d\n", count1);//��Ϊ�˿�һ�£���һ��2�ظ��Ĵ���
	system("pause");
	return 0;
}