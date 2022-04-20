#include <stdio.h>
//实现输入若干整数 统计其中大于0和小于0的个数

int main()
{
    int n;
    int a =0;
    int b= 0;
    printf("请输入若干整数:>");
    scanf("%d",&n);

    while( n != 0)
    {
        if(n>0)
            a++;
        else
            b++;
        scanf("%d",&n);
    }
    printf("%d,%d",a,b);
    return 0;
}