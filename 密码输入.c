#include "stdio.h"
main()
{
	char password[20]={0};
	printf("����������:>");
	scanf("%s",&password);
	printf("��ȷ������(Y/N)");
	int tem=0;
	while((tem=getchar())!='\n')
	{
		;
	 } 
	 int ch=getchar();
	 if(ch=='Y')
	 {
	 	printf("ȷ�ϳɹ�\n"); 
	 }
}
