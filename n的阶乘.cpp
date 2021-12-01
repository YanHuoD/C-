#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int main()
{
	int a, b;
	int m = 1;
	printf("请输入一个数");
		scanf("%d", &a);
	for (b = 1; b <= a; b++)
	{
		m = m * b;
	}
	printf("%d", m);
}