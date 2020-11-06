#include <stdio.h>
#include <windows.h>
#define M 2//宏定义，两个空瓶子换一瓶汽水，要是有别的需求直接改M的值即可
//1,喝汽水问题：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给n元，可以多少汽水（编程实现）。
void drinkSoda(int amount, int price)//表示输入的钱数，还有一瓶汽水的单价
{
	int count = amount / price;//那所有的钱买的汽水瓶子
	int empty = amount / price;//喝完汽水的空瓶子
	while (empty > 1){
		count += empty / M;//是偶数的话，就直接够换，是奇数的话也能兼容
		empty = empty / M + empty % M;//除了上边换的汽水之外，还可能剩余一个空瓶子
	}
	printf("你总共能喝%d瓶汽水\n", count);
}
int main()
{
	drinkSoda(20, 1);
	system("pause");
	return 0;
}