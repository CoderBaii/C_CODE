#include <stdio.h>
#include <math.h>

double fun1(double x)
{
    return (exp(x) + fabs(x-6)) / (x+1.3);
}

int main()
{
    printf("fun1(0.76) = %8.3lf\n",fun1(0.76));
    printf("fun1(3.00) = %8.3lf\n",fun1(3.00));
    printf("fun1(3.76) = %8.3lf\n",fun1(3.76));
}