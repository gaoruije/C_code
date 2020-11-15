#include <stdio.h>
#include <windows.h>
//1,按格式求平均值
//https://www.nowcoder.com/practice/48f89fcc444c4e00a2465b02dd8cc7e2?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1
void Averagescore()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double result = (a + b + c) / 3;
	double sum = a + b + c;
	printf("%.2lf %.2lf\n", sum, result);
}
//2,找四个数中的最大值
//https://www.nowcoder.com/practice/ae6a21920cac4f9184c8ecfcc87f89b9?tpId=107&tags=&title=&diffculty=0&judgeStatus=0&rp=1

	void Max(int arr[], int size)
	{

		int max = arr[0];
		for (int i = 1; i < size; i++){
			if (arr[i] > max){
				max = arr[i];
			}
		}
		printf("%d", max);
	}
	int main()
	{
		int arr[4] = { 0 };
		for (int i = 0; i < 4; i++){
			scanf("%d ", &arr[i]);
		}
		Max(arr, 4);
}
int main()
{
	Averagescore();
	system("pause");
	return 0;
}