# include "game.h"//双引号表示的包含的是自己写的库，就是自定义的。
                  //而<>表示的是系统中的库中的东西。
int main()
{
	int quit = 0 ;//将quit的内容赋值成0,就时结束游戏，不玩了。
	while (!quit){//是用了一个死循环，让用户一直去玩，除非玩家自己不想玩了。

		Menu();//就是调用的是show函数，show函数是在game.c中写的,这里要声明的
		int select = 0;
		scanf("%d", &select);

		switch (select){
		case 1://匹配到1了，就直接玩游戏了，每一个case对应一个break
			Game();
			break;
		case 2://匹配到2，就说明用户不想玩了，就直接退出了。
			quit = 2;//只要给quit赋值不是非0值即可。
			printf("Bye Bye !!!\n");
			break;
		default:
			printf("输入有误，请重新输入！\n");
			break;
		}
	}
	
	system("pause");
	return 0;
}