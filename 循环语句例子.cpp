#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int main()
{
	int line = 0;
	while (line<30000)
	{
		printf("好好学习:%d\n",line);
		line++;
	}
	if (line == 30000)
	{
		printf("顺利升入本科\n");
	}

	return 0;
}