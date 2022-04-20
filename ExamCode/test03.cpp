#include <stdio.h>
#include <math.h>
//根据对应的工资纳税

double f(float x)
{
    double n;
    if(x <= 1600)
    {
        n = 0;
    }
    else if(x > 1600 && x <= 2100)
    {
        n = (x-1600)*0.05;
    }
    else if(x > 2100 && x <= 3100)
    {
        n = ((x-1600)*0.1) - 25;
    }
    else
    {
        n = ((x-1600)*0.15) - 125;
    }
    return n;
}

int main()
{
    float x;
    double y;
    printf("请输入一个数字:\n");
    scanf("%f",&x);
    y = f(x);
    printf("f(0.2f)=%0.2f\n",y);
    return 0;
}