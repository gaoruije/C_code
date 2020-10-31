#include "game.h"

//1���˵�����ơ�
void Menu()
{
	printf("#######################\n");
	printf("###1, Play  2, Exit ###\n");
	printf("#######################\n");
	printf(" Please Select#  ");
}
//2��Ҫ��ʾ��һ�����̵����ӡ�
void ShowBoard(char board[][COL], int row, int col)//�κ����鴫����ֻ�е�һ��ά�ȿ��Ա�ʡ�ԡ�
{
	printf("  | 1 | 2 | 3 |\n");
	printf("---------------\n");
	for (int i = 0; i < row; i++){//��ʾ��������
		printf("%d |",i+1);//���û��У���Ϊ��߻��ý���������һ����ߵ�ʣ�µ�Ԫ�ء�
		for (int j = 0; j < col; j++){//��ʾ����ÿһ����ߵ�Ԫ��
			printf(" %c |", board[i][j]);//�������������ַ���������%c����ʾ
		}
		printf("\n");
		printf("---------------\n");
	}
}

//3�����û�������
void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int quit = 0;
	while (!quit){//�±��Ѿ�������quit����������ѭ�������
		printf("�����������ӵ�λ��# ");
		scanf("%d%d", &x, &y);
		//a,��֤�û������λ���ǺϷ��ġ�
		if (x < 1 || x > 3 || y < 1 || y > 3){
			printf("�����λ������!\n");
			continue;
		}
		//b,��֤�û������λ��û�б�ռ�ã�ֻҪ�Ϳո�Ƚϼ��ɡ�
		if (board[x - 1][y - 1] != ' '){//ע����ߵ�x��yҪ��һ��ע��������±ꡣ
			printf("�������λ���Ѿ���ռ���ˣ�\n");
			continue;
		}
		//c,�ϱ��Ѿ��ж����û�������׼ȷ�ģ��±߾ͽ������������С�
		board[x - 1][y - 1] = P_COLOR;
		quit = 1;//����֮��Ͳ�����ѭ���ˣ�����quitΪ1��һ����ȥ��ֱ�ӽ���ѭ����
	}
}
//4�������ж��Ƿ��������顣
char Judge(char board[][COL], int row, int col)
{
	//a,�ж������Ƿ�������������
	for (int i = 0; i < row; i++){
		if (board[i][0] == board[i][1] && \
			board[i][1] == board[i][2] && \
			board[i][0] != ' '){
			return board[i][0];//����һ�£�������ʾ* ���� #�����ж�˭Ӯ��
		}
	}
	//b,�ж������Ƿ�������������
	for (int j = 0; j < col; j++){
		if (board[0][j] == board[1][j] && \
			board[1][j] == board[2][j] && \
			board[0][j] != ' '){
			return board[0][j];
		}
	}
	//c,�Խ���1�����Ͻǵ����½ǣ��Ƿ�������������
	if (board[0][0] == board[1][1] && \
		board[1][1] == board[2][2] && \
		board[1][1] != ' '){
		return board[0][0];
	}
	//d,�Խ���2�����½ǵ����Ͻǣ��Ƿ�������������
	if (board[0][2] == board[1][1] && \
		board[1][1] == board[2][0] && \
		board[1][1] != ' '){
		return board[1][1];
	}
	//e,���̱����������ǻ�û�г����������飬Ҳ����ƽ�֡�
	//˼·��������̱�������˵����������û�пո��ˣ�ֻҪ�����пո��û������
	//�±߱�ʾ�û�������֮�У���������û��������
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			if (board[i][j] == ' ')
				return NEXT;
		}
	}
	//�±߱�ʾ�û������ˣ����Ǻ��塣
	return DRAW;
}
//5���õ�������
void ComputerMove(char board[][COL], int row, int col)
{
	while (1){
		//b,�����������������������±����Ѿ��ֺ��ˡ�
		int x = rand() % row;//�������ɵ����������һ����0~2
		int y = rand() % col;//�������ɵ����������һ����0~2
		//�ж�Ҫ�õ����ߵ�û��ռ��
		if (board[x][y] == ' '){
			board[x][y] = C_COLOR;//�����Ե����ӷŽ�ȥ
			break;
		}
	}
}

//6�������жϣ��������±߾���ֱ�ӵ���Judge������
//�ܹ����£�
void Game()
{
	//������������ӣ�
	srand((unsigned)time(NULL));
	char board[ROW][COL];
	//a,�����̳�ʼ��
	memset(board, ' ', sizeof(board));//board����Ҫ��ʼ���ڴ�飬�� ����ʾ���ʼ��Ϊ�ո�sizeof(board)��ʾȫ��������)
	char result = 'x';//��ѭ������ⲿ����ģ�Ϊ���õ�������ѭ���ܿ��������
	do{
		//1,��Ҫ���û����ֳ����̡�
		ShowBoard(board, ROW, COL);
		//2,���û�����
		PlayerMove(board, ROW, COL);
		//3,�û�����Ҫ�����ж�
		result = Judge(board, ROW, COL);
		if (result != NEXT){
			break;//ֻ���н���˾�����ѭ����
		}
		//4,���Կ�ʼ��
		ComputerMove(board, ROW, COL);
		//5,������������ж�
		result = Judge(board, ROW, COL);
		if (result != NEXT){
			break;//ֻ���н���˾�����ѭ����
		}
	} while (1);//��ʾҪ��û���ж��ɹ��������ѭ����

	if (result == P_COLOR){
		printf("��ϲ�㣬��Ӯ�ˣ�����\n");
	}
	else if (result == C_COLOR){
		printf("������˼�������ˣ�\n");
	}
	else {
		printf("���壡\n");
	}
	ShowBoard(board, ROW, COL);//����˭Ӯ�˺󣬶����������ܿ���Ӯ�ý��
}