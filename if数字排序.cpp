#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>				//输入三个数 从小到大排序输出 
int main()
{
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)						//如果a>b  a与b交换值  也就是把大的数放在后面 
	{
		t = b;
		b = a;
		a = t;
	}
	if (a > c)						//a再于c比较   保证a最小 
	{
		t = c;
		c = a;
		a = t;
	}
	if (b > c)						//两个较大的值再比较，再交换最大值 
	{
		t = c;
		c = b;
		b = t;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

