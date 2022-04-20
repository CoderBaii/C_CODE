#include <stdio.h>
#include <math.h>

//对函数f(x)=x^2-2x+6,分别计算f(x+8)和f(sinx)的值

double fun(double x)
{
    return (x*x-2*x+6);
}

int main()
{
    double x,y1,y2;
    printf("Please input x:");
    scanf("%lf",&x); //2.0
    y1 = fun(x+8);
    y2 = fun(sin(x));
    printf("\nf(x+8)=%.3lf",y1);  //86.000
    printf("\nf(sin(x))=%.3lf",y2);  //5.008
}