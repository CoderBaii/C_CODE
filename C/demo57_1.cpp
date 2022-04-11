#include <stdio.h>

int Max_divisor(int a,int b);
int Min_multiple(int a,int b);

//最大公约数
int Max_divisor(int a,int b) // 10 6
{
    //判定传进来的数是否小于0
    if(a <= 0 || b <= 0)
        return 0;
    //如果a能被b整除则b就为最大公约数
    if(a % b == 0)
        return b;
    else 
        Max_divisor(b,a%b); //(6,10%6=4;4,6%4;)
}

//最小公倍数
int Min_multiple(int a,int b)
{
    return a * b /Max_divisor(b,a%b);
}

int main()
{
    int a,b,c;
    printf("请输入两个整数:>");
    scanf("%d %d",&b,&c); 
    a = Max_divisor(b,c);
    printf("%d和%d的最大公约数为%d\n",b,c,a);

    a = Min_multiple(b,c);
    printf("%d和%d的最小公倍数为%d\n",b,c,a);
    return 0;
}