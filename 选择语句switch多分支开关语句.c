#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
int main()
{
	int score;
	printf("������ѧ���ɼ�(0-100):\n");
	scanf("%d", &score);
	if
		(score<0|| score>100)
	{
		printf("�ɼ����������⣬�����˳�");
		exit(0);
	}
	switch (score/10)
	{
	case 10:
	case 9:printf("����! "); break;
	case 8:printf("���ã�"); break;
	case 7:printf("�еȣ�"); break;
	case 6:printf("����"); break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("������"); break;
	default:printf("��������"); break;

	}
}