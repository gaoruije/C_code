#include <stdio.h>
#include <windows.h>
#include <assert.h>
//1,ģ��ʵ���ַ�����ƴ�ӣ�stract��
char *my_stract(char *dest, const char *src)//�����ǲ��ܱ��޸ĵģ���const������
{
	char *ret = dest;//����һ��ret�������dest��������ַ�
	assert(dest != NULL);//�жϲ�Ϊ��
	assert(src != NULL);//�жϲ�Ϊ��
	while (*dest != '\0'){//û�е�\0���Ϳ��Լ���������,Ϊ������destָ��\0��
		dest++;
	}
	//�ϱ��Ѿ���destָ����\0���±߾ͽ���ƴ��
	while (*dest = *src){
		//ƴ�����һ����Ȼ���������½��У�dest��src������++
		dest++;
		src++;
	}
	return ret;//����ƴ�Ӻõ��ַ���
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
//2,ģ��ʵ��strcmp,�Ƚ������ַ���
//ǰ�ߴ��ں��ߣ�����1    ǰ��С�ں��ߣ�����-1      ǰ�ߵ��ں��ߣ�����0
char MyStrcmp(const char *src, const char *dest)
{
	assert(src != 0 && dest != 0);//�п�
	int ret = 0;
	//Ҫ�������ַ�һ�����������һ���ıȽ�
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
	////��ӡ�ַ���%s����ӡ
	//printf("%s\n", my_stract1(dest, src));
	char src[] = "adcdef";
	char dest[] = "acdefg";
	printf("%d\n",MyStrcmp(src,dest));
	system("pause");
	return 0;
}