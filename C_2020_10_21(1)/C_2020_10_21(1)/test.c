# include<stdio.h>
# include<windows.h>
//1,函数实现求素数的函数
void Primenumber(int start, int end){
	int i = 0;
	int j = 0;
	int count = 0;
	printf("在你确定的范围下的素数有：\n");
	for (int i = start; i <= end; i++){
		for (j = 2; j < i; j++){
			if (i % j == 0){//说明不是素数
				break;
			}
		}
		if (i == j){//上边一直循环，直到i 和 j相等的时候，就说明不用再继续了，素数找到。
			printf("%d  ", i);
			count++;
		}
	}
	printf("\n");
	printf("所有的素数的个数是: %d   \n", count);
}
//2，用函数实现判断一个年份是不是闰年
void is_leap(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0){
		printf("是闰年\n");
	}
	else{
		printf("不是闰年\n");
	}
}
//3,用函数来实现交换两个整数的内容。
void exchange(int m, int n)
{
	int tmp;
	tmp = m;
	m = n;
	n = tmp;
	printf("%d %d \n", m, n);
}
//4,打印乘法口诀表
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
//5,递归法实现打印一个整数的每一位。
void print(int n)
{
	if (n > 9){
		print(n / 10);
	}
	printf("%d ", n % 10);
}
//6:(a)递归方法求N的阶乘
int fact(int n)
{
	if (n <= 2){
		return n;
	}
	return  n * fact(n - 1);
}
//6:(b)非递归方法求n的阶乘。
void fact_1(int n)
{
	int sum = 1;
	if (n == 0 || n == 1){
		sum = 1;
	}
	for (int i = n; i > 1; i--){
		 sum = sum*i;
	}
	printf("阶乘的结果是： %d\n", sum);
}
//7,递归实现n的k次方,现在的K只能是正数或者0，负数还没有想出来。
int cube(int n, int k)
{
	if (k == 0){
		return 1;
	}
	else{
		return n*cube(n, k - 1);
	}
}
//8:(a)非递归法实现第n个斐波那契数。
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
	printf("求3执行了这么多次：%d\n", count);
	printf("你要求的斐波那契数是：%d\n", third);
}
//8:(b)递归法求斐波那契数。
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
	//1,打印100~200之间的所有的素数。
	//2,判断一个年份是不是闰年。
	//is_leap(400);
	//3,交换两个数的内容
	//exchange(45,90);
	//4,展示乘法口诀表
	//show();
	//5,打印输入数字的每一位
	//print(1234);
	//6,递归实现求N的阶乘。
	//printf("最终计算的阶乘结果是： %d\n", fact(5));
	//fact_1(2);
	//7,实现求N的K次方的，这里没有考虑负数。
	//int ret = cube(2, 3);
	//printf("结果是：%d\n", ret);
	fib(10);//迭代法，就是简单的循环
	int n = 0;
	int res = fib1(40);
	printf("你要求的斐波那契数是：%d\n", res);
	printf("求2所用的次数是：%d\n", count1);//是为了看一下，求一个2重复的次数
	system("pause");
	return 0;
}