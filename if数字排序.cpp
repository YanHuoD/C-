#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>				//���������� ��С����������� 
int main()
{
	int a, b, c, t;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b)						//���a>b  a��b����ֵ  Ҳ���ǰѴ�������ں��� 
	{
		t = b;
		b = a;
		a = t;
	}
	if (a > c)						//a����c�Ƚ�   ��֤a��С 
	{
		t = c;
		c = a;
		a = t;
	}
	if (b > c)						//�����ϴ��ֵ�ٱȽϣ��ٽ������ֵ 
	{
		t = c;
		c = b;
		b = t;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}

