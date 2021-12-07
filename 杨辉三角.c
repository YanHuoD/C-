#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

    int i, j;
    for (i = 1; i <= 5; i++)//打印高度为5的数字金字塔
    {
        for (j = 1; j <= 5 - i; j++)//打印空格
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)//打印随高度递增数字
            printf("%2d", j);
        for (j = i - 1; j >= 1; j--)//打印递增数字
        {
            printf("%2d", j);
        }

        printf("\n");
    }
    return 0;
}