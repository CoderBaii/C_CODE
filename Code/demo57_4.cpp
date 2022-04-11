#include <stdio.h>

int main()
{
    int a,b,i,ret;
    
    printf("请输入两个整数:>");
    scanf("%d %d",&a,&b); 

    for(i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
            ret = i;
    }
    printf("%d和%d的最大公约数是%d\n",a,b,ret);
    return 0;
}