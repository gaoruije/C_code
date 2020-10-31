#include "game.h"

//1，菜单的设计。
void Menu()
{
	printf("#######################\n");
	printf("###1, Play  2, Exit ###\n");
	printf("#######################\n");
	printf(" Please Select#  ");
}
//2，要显示出一个棋盘的样子。
void ShowBoard(char board[][COL], int row, int col)//任何数组传参中只有第一个维度可以被省略。
{
	printf("  | 1 | 2 | 3 |\n");
	printf("---------------\n");
	for (int i = 0; i < row; i++){//表示的是行数
		printf("%d |",i+1);//不用换行，因为后边还得接着输入那一行里边的剩下的元素。
		for (int j = 0; j < col; j++){//表示的是每一行里边的元素
			printf(" %c |", board[i][j]);//这里边输入的是字符，所以用%c来表示
		}
		printf("\n");
		printf("---------------\n");
	}
}

//3，让用户先落棋
void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int quit = 0;
	while (!quit){//下边已经设置了quit，这里是死循环的入口
		printf("请输入你落子的位置# ");
		scanf("%d%d", &x, &y);
		//a,保证用户输入的位置是合法的。
		if (x < 1 || x > 3 || y < 1 || y > 3){
			printf("输入的位置有误!\n");
			continue;
		}
		//b,保证用户输入的位置没有被占用，只要和空格比较即可。
		if (board[x - 1][y - 1] != ' '){//注意里边的x和y要减一，注意数组的下标。
			printf("你输入的位置已经被占用了！\n");
			continue;
		}
		//c,上边已经判断了用户落子是准确的，下边就将子落入棋盘中。
		board[x - 1][y - 1] = P_COLOR;
		quit = 1;//落子之后就不用再循环了，设置quit为1，一会上去就直接结束循环。
	}
}
//4，进行判断是否三子连珠。
char Judge(char board[][COL], int row, int col)
{
	//a,判断行数是否满足三子连珠
	for (int i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && \
			board[i][1] == board[i][2] && \
			board[i][0] != ' '){
			return board[i][0];//返回一下，最后会显示* 或者 #，来判断谁赢。
		}
	}
	//b,判断列数是否满足三子连珠
	for (int j = 0; j < col; j++){
		if (board[0][j] == board[1][j] && \
			board[1][j] == board[2][j] && \
			board[0][j] != ' '){
			return board[0][j];
		}
	}
	//c,对角线1（左上角到右下角）是否满足三子连珠
	if (board[0][0] == board[1][1] && \
		board[1][1] == board[2][2] && \
		board[1][1] != ' '){
		return board[0][0];
	}
	//d,对角线2（左下角到右上角）是否满足三子连珠
	if (board[0][2] == board[1][1] && \
		board[1][1] == board[2][0] && \
		board[1][1] != ' '){
		return board[1][1];
	}
	//e,棋盘被放满，但是还没有出现三子连珠，也就是平局。
	//思路：检测棋盘被放满就说明了棋盘上没有空格了，只要棋盘有空格就没有满。
	//下边表示用户还在走之中，就是棋盘没有下满。
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			if (board[i][j] == ' ')
				return NEXT;
		}
	}
	//下边表示用户下满了，就是和棋。
	return DRAW;
}
//5，让电脑落棋
void ComputerMove(char board[][COL], int row, int col)
{
	while (1){
		//b,生成随机数，随机数种子在下边中已经种好了。
		int x = rand() % row;//行数生成的随机数种子一定是0~2
		int y = rand() % col;//列数生成的随机数种子一定是0~2
		//判断要让电脑走的没被占用
		if (board[x][y] == ' '){
			board[x][y] = C_COLOR;//将电脑的棋子放进去
			break;
		}
	}
}

//6，进行判断，体现在下边就是直接调用Judge函数。
//架构如下：
void Game()
{
	//种下随机数种子：
	srand((unsigned)time(NULL));
	char board[ROW][COL];
	//a,将棋盘初始化
	memset(board, ' ', sizeof(board));//board代表要初始的内存块，‘ ’表示想初始化为空格，sizeof(board)表示全部的数组)
	char result = 'x';//在循环体的外部定义的，为了让底下跳出循环能看见结果。
	do{
		//1,先要给用户呈现出棋盘。
		ShowBoard(board, ROW, COL);
		//2,让用户先走
		PlayerMove(board, ROW, COL);
		//3,用户走完要进行判断
		result = Judge(board, ROW, COL);
		if (result != NEXT){
			break;//只有有结果了就跳出循环了
		}
		//4,电脑开始走
		ComputerMove(board, ROW, COL);
		//5,电脑走完进行判断
		result = Judge(board, ROW, COL);
		if (result != NEXT){
			break;//只有有结果了就跳出循环了
		}
	} while (1);//表示要是没有判定成功则进行死循环。

	if (result == P_COLOR){
		printf("恭喜你，你赢了！！！\n");
	}
	else if (result == C_COLOR){
		printf("不好意思，你输了！\n");
	}
	else {
		printf("和棋！\n");
	}
	ShowBoard(board, ROW, COL);//不管谁赢了后，都得让人们能看见赢得结果
}