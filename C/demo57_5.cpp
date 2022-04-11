#include <stdio.h>

int main()
{
    int a,b;
    
    printf("请输入两个整数:>");
    scanf("%d %d",&a,&b); 

    // 如果输入的是负数，将其转换为正数
    a = ( a > 0) ? a : -a;
    b = ( b > 0) ? b : -b;

    while(a != b) //20 5
    {
        if(a > b)
            a -= b;
            //a = a-b;
        else
            b -= a;
            //b = b-a;
    }
    printf("它们的的最大公约数是%d\n",a);
    return 0;
}