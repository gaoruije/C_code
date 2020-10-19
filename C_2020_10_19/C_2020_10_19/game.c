//因为在头文件中已经将一些声明都写了，这里就不用在继续写了，直接执行以下操作即可。
# include "game.h"//意思是包含了 game.h ,就说明了game.h中的所有的东西在这个game.c中都有的。
void Menu()//表示的菜单这个函数。
{
	printf("####################\n");
	printf("###1,Play   2,Ext###\n");
	printf("####################\n");
	printf("Please Select  #\n");
}
void Game()
{
	srand((unsigned long)time(NULL));//生成一个随机数种子,并进行强制类型转换。
	int r = rand() % RANGE + 1;//随机生成的一个随机数模上100，在加上1，就是0~100
	//任何的数字模100的值一定是0~99，所以在加上1，就是代表的范围就是1~100。
	while (1){
		int a = 0;
		printf("请出入你所猜的数字:\n");
		scanf("%d", &a);//发现这里不换行的话，就不用z^来告诉编译器说你输完了。
		if (a < r){
			printf("猜小了，请继续");
		}
		else if (a > r){
			printf("猜大了，请继续");
		}
		else{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}