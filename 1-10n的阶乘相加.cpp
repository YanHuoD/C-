#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int main()
{
	int a=0, b=0;
	int m = 1,sum=0;
	
	for (b = 1; b <= 10; b++)
	{
		m = 1;
		for (a = 1; a <=b; a++)
		{
			m *=   a;
			
		}
		sum += m;
	}
	printf("%d\n", sum);
}