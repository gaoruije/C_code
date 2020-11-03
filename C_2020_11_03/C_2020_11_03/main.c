#include <stdio.h>
#include <windows.h>
//1,获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列,
//要将每个数的左边的所有位变为0,所以要右移，奇数起始是移动31个，偶数起始是移动30个。
void Printparitybits(int m)
{
	//1,打印奇数位,每次移动两个位数，因为是奇偶来打印的
	printf("所有的奇数位的二进制序列是：");
	for (int i = 31; i > 0; i -= 2){
		printf("%d  ",( m >> i) & 1);//最后边的那个移一位,所以i的值是最低是1
	}
	printf("\n");
	//2,打印偶数序列，同理
	printf("所有的偶数位的二进制序列是：");
	for (int i = 30; i >= 0; i -= 2){//因为是偶数，要判断到32位，i最小取到0.
		printf("%d  ", (m >> i) & 1 );//最后边的那个i不移位，所以i最低是0.
	}
	printf("\n");
}

int main()
{
	Printparitybits(-1);
	system("pause");
	return 0;
}