#include <stdio.h>
//递归 最大公约数

int gcd(int a,int b)
{
    if(b != 0)
    {
        return gcd(b,(a%b));
    }
    else 
        return a;
}

int main()
{
    int a,b;
    
    printf("请输入两个整数:>");
    scanf("%d %d",&a,&b); 

    printf("它们的的最大公约数是%d\n",gcd(a,b));
    return 0;
}