#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

    int i, j;
    for (i = 1; i <= 5; i++)//��ӡ�߶�Ϊ5�����ֽ�����
    {
        for (j = 1; j <= 5 - i; j++)//��ӡ�ո�
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)//��ӡ��߶ȵ�������
            printf("%2d", j);
        for (j = i - 1; j >= 1; j--)//��ӡ��������
        {
            printf("%2d", j);
        }

        printf("\n");
    }
    return 0;
}