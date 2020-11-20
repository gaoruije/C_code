#include <stdio.h>
#include <windows.h>
//1,输入几行字符，判断字符是大写还是小写
//https://www.nowcoder.com/practice/7eb4df4d52c44d309081509cf52ecbc4?tpId=107&&tqId=33327&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
void judge()
{
	char a;
	while (scanf_s("%c", &a) != EOF)
	{
		if (a == 'a' || a == 'A' || a == 'o' ||
			a == 'O' || a == 'E' || a == 'e' ||
			a == 'I' || a == 'i' || a == 'u' ||
			a == 'U'){
			printf("Vowel\n");
		}
		else{
			printf("Consonant\n");
		}
	}
}
int main()
{
	judge();
	system("pause");
	return 0;
}