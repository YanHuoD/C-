#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
	int a, b, c, d;
	printf("水仙花数是 ");	
	for (a = 100; a <99999 ;a++)
	{
		b = a / 100;
		c = a/10%10;
		d = a% 10;
		if (b* 100 + c * 10 + d == b * b * b + c * c * c + d * d * d)
			printf("%-5d", a);
	}
	printf("\n");
	return 0;

}