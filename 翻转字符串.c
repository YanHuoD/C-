#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char a[50] = { 0 };//初始化
	int i;
	int n;
	int t;
	scanf("%s", &a);//输入一串字符串
	n = strlen(a) - 1;//字符串的长度
	for (i = 0; i < n; i++)//i和n，一个递增，一个递减，代表前面的元素和后面元素的对应
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		n--;
	}
	printf("%s", a);
}