#include <stdio.h>

int main() //计算1/1-1/2+...+1/99-1/100的结果(加减交替)
{
    int i = 0;
    double s;
    for(i=1;i<=100;i++)
    {
        if(i%2 == 0)  //偶数与奇数分开计算
        {
            s -= 1.0/i;  //s-1.0/i=s
        }
        else
        {
            s += 1.0/i;
        }
    }
    printf("%lf\n",s);

    return 0;
}