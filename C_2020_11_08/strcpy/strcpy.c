#include <stdio.h>
#include <windows.h>
char * my_strcpy(char *dest, char *scr)
{
	char *p = dest;
	assert(dest != NULL);//断言，会打印出一条错误信息
	assert(scr != NULL);//同上
	while (*dest++ = *scr++)
	{
		;
	}
	return p;
}
int main()
{
	char p1[] = "helloworld";
	char p2[] = "good";
	my_strcpy(p1, p2);
	printf("%s\n", p1);
	system("pause");
	return 0;
}