#include <stdio.h>
//打印菱形

int main()
{
    int i,rows,space,k = 0;
    printf("请输入行数:>");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++,k=0)
    {
        for(space=1;space<=rows-i;++space)
        {
            printf("  ");
        }
        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    for(i=1;i<=rows-1;i++,k=0)
    {
        for(space=1;space<=i;++space)
        {
            printf("  ");
        }
        while(k < 2*(rows - i) - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
}