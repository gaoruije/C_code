#include <stdio.h>
#include <windows.h>
//1,按格式输图案
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
//2,//将一个十进制数转换为对应的进制，注意格式
//https://www.nowcoder.com/practice/4ffcc9f206b949ddb057ee0099b34d51?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
//printf可以使用使用格式控制串“%o”、“%X”分别输出八进制整数和十六进制整数
//在八进制前显示前导0，在十六进制数前显示前导0X
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