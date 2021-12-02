#include "stdio.h"
main()
{
	char password[20]={0};
	printf("请输入密码:>");
	scanf("%s",&password);
	printf("请确定密码(Y/N)");
	int tem=0;
	while((tem=getchar())!='\n')
	{
		;
	 } 
	 int ch=getchar();
	 if(ch=='Y')
	 {
	 	printf("确认成功\n"); 
	 }
}
