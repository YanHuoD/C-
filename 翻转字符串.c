#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char a[50] = { 0 };//��ʼ��
	int i;
	int n;
	int t;
	scanf("%s", &a);//����һ���ַ���
	n = strlen(a) - 1;//�ַ����ĳ���
	for (i = 0; i < n; i++)//i��n��һ��������һ���ݼ�������ǰ���Ԫ�غͺ���Ԫ�صĶ�Ӧ
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		n--;
	}
	printf("%s", a);
}