#include <stdio.h>
#include <math.h>

double fun1(double x)
{
    if(x < 3)
    {
        x = 1.2;
    }
    else if(x == 3)
    {
        x = 10;
    }
    else
    {
        x = 2*x+1;
    }
    return x;
}

int main()
{
    printf("fun1(0.76) = %8.3lf\n",fun1(0.76));
    printf("fun1(3.00) = %8.3lf\n",fun1(3.00));
    printf("fun1(3.76) = %8.3lf\n",fun1(3.76));  //%8.3lf -- 代表总共有8个字符，后面3个小数位
}