#include <stdio.h>
//辗转相除法 最大公约数

int main()
{
    int a,b;
    int tmp = 0;
    
    printf("请输入两个整数:>");
    scanf("%d %d",&a,&b); 

    while(b != 0) //10 5
    {
        tmp = a%b;
        a = b;
        b = tmp; 
    }

    printf("它们的的最大公约数是%d\n",a);
    return 0;
}