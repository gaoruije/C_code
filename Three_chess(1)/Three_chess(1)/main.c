#include "game.h"
int main()
{
	//�±��ǿ��
	int quit = 0;
	int select;
	while (!quit){
		Menu();
		scanf("%d", &select);//���û��\n.

		switch (select){
		case 1:
			Game();
			printf("Ҫ��Ҫ����һ�ѣ�\n");
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("��������\n");
			break;
		}
	}
	printf("ByeBye\n");
	system("pause");
	return 0;
}