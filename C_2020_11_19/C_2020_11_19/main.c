#include <stdio.h>
#include <windows.h>
#include <assert.h>
//1,�������룬�ж�Ȼ���ӡ
//https://www.nowcoder.com/practice/557cc54704bb4d56b73b62d1a5455331?tpId=107&&tqId=33322&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
void print()
{
	int a;
	//�±��Ƕ��ж���
	while (scanf_s("%d\n", &a) != EOF){
		if (a >= 140){
			printf("Genius\n");
		}
	}
}
//2,ģ��ʵ��strlen
int mystrlen(char *str)
{
	assert(str != NULL);
	char *p = str;
	while (*p != '\0'){
		p++;
	}
	return p - str;
}
int main()
{
	//print();
	char str[] = "afjdjdavdf";
	printf("%d\n", mystrlen(str));
	system("pause");
	return 0;
}

