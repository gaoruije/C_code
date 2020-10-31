#include "game.h"
int main()
{
	//下边是框架
	int quit = 0;
	int select;
	while (!quit){
		Menu();
		scanf("%d", &select);//后边没有\n.

		switch (select){
		case 1:
			Game();
			printf("要不要再来一把？\n");
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("输入有误！\n");
			break;
		}
	}
	printf("ByeBye\n");
	system("pause");
	return 0;
}