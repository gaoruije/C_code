#include <stdio.h>
#include <windows.h>
#include <assert.h>
//1,模拟实现字符串的拼接（stract）
char *my_stract(char *dest, const char *src)//后者是不能被修改的，用const来修饰
{
	char *ret = dest;//定义一个ret用来存放dest拷贝后的字符
	assert(dest != NULL);//判断不为空
	assert(src != NULL);//判断不为空
	while (*dest != '\0'){//没有到\0，就可以继续向下走,为了先让dest指向‘\0’
		dest++;
	}
	//上边已经让dest指向了\0，下边就进行拼接
	while (*dest = *src){
		//拼接完第一个，然后依次向下进行，dest和src都进行++
		dest++;
		src++;
	}
	return ret;//返回拼接好的字符串
}
//char *my_stract1(char *dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest != '\0'){
//		dest++;
//	}
//	while (*dest = *src){
//		dest++;
//		src++;
//	}
//	return ret;
//}
//2,模拟实现strcmp,比较两个字符串
//前者大于后者：返回1    前者小于后者：返回-1      前者等于后者：返回0
char MyStrcmp(const char *src, const char *dest)
{
	assert(src != 0 && dest != 0);//判空
	int ret = 0;
	//要是两个字符一样，则进行下一个的比较
	while (!(ret = *(unsigned char*)src - *(unsigned char*)dest) && *dest){
		src++;
		dest++;
	}
	if (ret < 0){
		return -1;
	}
	else if (ret > 0){
		return 1;
	}
	else{
		return ret;
	}
}
int main()
{
	//char src[] = "123445";
	//char dest[20] = "abcdef";
	////打印字符用%s来打印
	//printf("%s\n", my_stract1(dest, src));
	char src[] = "adcdef";
	char dest[] = "acdefg";
	printf("%d\n",MyStrcmp(src,dest));
	system("pause");
	return 0;
}