#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
	int a=0,b=0;
	for (a = 1; a <= 999; a++)
	{
		if(a%2!=0)
			b = a + b;
	}
	printf("%d", b);
	

}