#include <stdio.h>
#define M 50

//根据参数n计算大于10的最小n个能被3整除的正整数的倒数之和。

double fun(int n)
{
    double y = 0.0;
    int i,j;
    j=0;
    for(i=1;;i++)
    {
        if((i>10)&&(i%3==0))
        {
            y += (double)1/i;
            j++;
        }
        if(j==n)
            break;
    }
    return y;
}

int main()
{
    printf("fun(8) = %8.31f\n",fun(8));
}