#include <stdio.h>
#include <windows.h>
//3,输入n科成绩（浮点数表示），统计其中的最高分，最低分以及平均分。
//https://www.nowcoder.com/practice/cad8d946adf64ab3b17a555d68dc0bba?tpId=107&tqId=33367&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking
int HighestlowestScore1()
{
	int number;
	float arr[5], max = 0.00, min = 100.00, sum = 0.00, aver;
	scanf_s("%d", &number);
	for (int i = 0; i < number; i++){
		scanf_s("%f", &arr[i]);//读取数据。读上5个
	}
	for (int i = 0; i < number; i++){
		if (arr[i] > max){
			max = arr[i];
		}
		if (arr[i] < min){
			min = arr[i];
		}
		sum += arr[i];
	}
	aver = sum / number;
	printf("%.2f %.2f %.2f", max, min, aver);
}
int main()
{
	HighestlowestScore1();
	system("pause");
	return 0;
}