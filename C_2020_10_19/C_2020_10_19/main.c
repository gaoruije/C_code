# include "game.h"//˫���ű�ʾ�İ��������Լ�д�Ŀ⣬�����Զ���ġ�
                  //��<>��ʾ����ϵͳ�еĿ��еĶ�����
int main()
{
	int quit = 0 ;//��quit�����ݸ�ֵ��0,��ʱ������Ϸ�������ˡ�
	while (!quit){//������һ����ѭ�������û�һֱȥ�棬��������Լ��������ˡ�

		Menu();//���ǵ��õ���show������show��������game.c��д��,����Ҫ������
		int select = 0;
		scanf("%d", &select);

		switch (select){
		case 1://ƥ�䵽1�ˣ���ֱ������Ϸ�ˣ�ÿһ��case��Ӧһ��break
			Game();
			break;
		case 2://ƥ�䵽2����˵���û��������ˣ���ֱ���˳��ˡ�
			quit = 2;//ֻҪ��quit��ֵ���Ƿ�0ֵ���ɡ�
			printf("Bye Bye !!!\n");
			break;
		default:
			printf("�����������������룡\n");
			break;
		}
	}
	
	system("pause");
	return 0;
}