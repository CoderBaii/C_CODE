#include <stdio.h>
//计算p=m!/n!(m-n)!，m、n为整数且m>n>=0。

double fun(int x,int y)
{
    unsigned int i = 0;
    double p = 1.0;
    for(i=1;i<=x;i++) //计算m的阶乘
    {
        p *= i;
    }
    for(i=1;i<=y;i++) //计算m的阶乘除n的阶乘
    {
        p /= i;
    }
    for(i=1;i<=x-y;i++) //计算m-n的阶乘
    {
        p /= i;
    }
    return p;
}

int main()
{
    printf("%f\n",fun(2,1));
    return 0;
}