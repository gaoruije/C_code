#include "game.h"
int main()
{
	//下边是框架
	int quit = 0;
	int select;
	while (!quit){
		Menu();
		scanf("%d\n", &select);

		switch (select){
		case 1:
			Game();
			printf("要不要在来一把？");
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