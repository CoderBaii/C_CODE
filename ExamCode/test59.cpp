#include <stdio.h>
//打印菱形 - diamond

void diamond(int i)
{
    int j,k;
    
    for(j=0;j<=7-i;j++)
    {
        printf(" ");
    }
    for(k=0;k<2*i-1;k++)
    {
        printf("*");
    }
    /* 箭头
    for(k=0;k<2*i-1;k++)
    {
        printf("* ");
    }
    */
    printf("\n");
}

int main()
{
    int i;
    //正三角
    for(i=0;i<5;i++)
    {
        diamond(i);
    }
    //倒三角
    for(i=5;i>=0;i--)
    {
        diamond(i);
    }
}

/*
#include <stdio.h>
//菱形

int main()
{
    int i,j,space,rows,k=0;
    do
    {
        printf("请输入想要打印的行数:>");
        scanf("%d",&rows);
    }while(rows<0 || rows>13);
    
    for(i=1; i<=rows; i++,k=0)
    {
        for(space=1; space<=rows-i; space++)
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

    for(i=1; i<=rows-1; i++,k=0)
    {
        for(space=1; space<=i; space++)
        {
            printf("  ");
        }
        while(k != 2*(rows - i)-1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }

    return 0;
}
*/