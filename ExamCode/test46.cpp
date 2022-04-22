#include <stdio.h>
//用公式pai约等于4x(1-1/3+1/5-1/7+...+1/10001)计算圆周率的近似值


int main()
{
    double pi = 0;
    long i,sign = 1;
    for(i=1;i<=10001;i+=2)
    {
        pi+=1.0*sign/1;
        sign = -sign;
    }
    pi*= 4;
    printf("%f\n",pi);
}