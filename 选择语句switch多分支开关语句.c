#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
int main()
{
	int score;
	printf("请输入学生成绩(0-100):\n");
	scanf("%d", &score);
	if
		(score<0|| score>100)
	{
		printf("成绩输入有问题，正在退出");
		exit(0);
	}
	switch (score/10)
	{
	case 10:
	case 9:printf("优秀! "); break;
	case 8:printf("良好！"); break;
	case 7:printf("中等！"); break;
	case 6:printf("及格！"); break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("不及格！"); break;
	default:printf("数据有误！"); break;

	}
}