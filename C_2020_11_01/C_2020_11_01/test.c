#include <stdio.h>
#include <windows.h>

int Strlen(const char *str)
{
	if (str == NULL){
		return 0;
	}

	char *end = str;
	while (*end){
		end++;
	}
	return end - str;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int *p = arr; //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i<sz; i++)
	{
		//printf("%d ", *(p + i));
		//printf("%d ", p[i]);
		//printf("%d ", arr[i]);
		printf("%d ", *(arr + i));
	}


	//int a[10] = { 0 };
	//char *p = a;
	//char *q = &a[9];
	//printf("%d\n", q - p);
	//const char *str = "abcd1234";
	//int len = Strlen(str);
	//printf("%d\n", len);
	//int *p = NULL;
	//悬垂指针， 野指针
	//int arr[10] = { 0 };
	//int * pi = arr;
	//short *ps = (short*)arr;
	//char *pc = (char*)arr;
	//printf("##########################\n");
	//printf("%p\n", arr);
	//printf("%p\n", pi);
	//printf("%p\n", ps);
	//printf("%p\n", pc);
	//printf("##########################\n");
	//printf("%p\n", pi+2);
	//printf("%p\n", ps+2);
	//printf("%p\n", pc+2);
	//printf("##########################\n");
	//int a = 10;
	//int  *p = &a;
	//p = 100;
	//*p = 100;
	//int i = 1;
	//int ret = (++i) + (++i) + (++i);
	//printf("%d\n", ret);
	//printf("%d\n", i);
	//int i = 10;
	//i = i-- - --i * (i = -3) * i++ + ++i;
	//printf("i = %d\n", i);
	system("pause");
	return 0;
}