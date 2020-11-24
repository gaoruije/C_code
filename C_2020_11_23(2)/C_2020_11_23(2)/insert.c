#include <stdio.h>
#include <windows.h>
//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//https://www.nowcoder.com/practice/68ae3b28b4a04e098485c4423e2c6548?tpId=107&tqId=33368&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking
//共三行，第一行输入一个整数(0≤N≤50)。第二行输入N个升序排列的整数，输入用空格分隔的N个整数。第三行输入想要进行插入的一个整数。


   
void insert()
{
	//1,按要求先读取一个整数，代表的是下一行要读入的数字的个数
	printf("请输入你要输入的数字个数：\n");
	int m = 0;
	scanf_s("%d", &m);
	//2,输入第二行，输入m个整数，用数组来存
	int arr[51];//让数组的个数是最大值加一，因为最后要插入一个元素，这个是最坏的情况
	//进行读取m个数字
	printf("请写入你的初始数字：\n");
	for (int i = 0; i < m; i++){
		scanf_s("%d ", &arr[i]);
	}
	//3，读入要插入的数字
	printf("请输入要插入的数字：\n");
	int n = 0;
	scanf_s("%d", &n);
	//下边就进行遍历数组和插入的值来一一比较
	for (int j = 0; j < m; j++){
		//要是发现插入的数字比arr[j]小了，就给j的位置插入数字n,否则就一直往下走
		if (n < arr[j]){
			//给数组里边插入数字，一定是从后向前插入的，直到j为止，要进行循环
			for (int k = m; k > j; k--){//注意k和j比较的时候不用带等号，下边已经将j位置的元素向后移了
				arr[k] = arr[k - 1];//将k-1位置的值赋值给k位置，就是讲数组同一向后移了一个
			}
			arr[j] = n;//插入元素n
			break;//插入成功则直接跳出循环了
		}
	}
	//要是达到下边的条件
	if (arr[m - 1] < n){//就是说走到了数组的最后一个元素，都没有要插入的元素大，则进行尾插
		arr[m] = n;//直接将元素放在数组最后一个的后边
	}
	//上边的操作已经完成了插入，下边进行打印
	printf("插入后的数组如下：\n");
	for (int i = 0; i <= m; i++){//注意因为插入的数字可能是最后一个，所以数组在打印时应该长度加一
		printf("%d ", arr[i]);
	}
}
int main()
{
	insert();
	system("pause");
	return 0;
}