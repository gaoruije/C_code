#include <stdio.h>
#include <windows.h>
char * my_strcpy(char *dest, char *scr)
{
	char *p = dest;
	assert(dest != NULL);//���ԣ����ӡ��һ��������Ϣ
	assert(scr != NULL);//ͬ��
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