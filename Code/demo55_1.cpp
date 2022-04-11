#include <stdio.h>
//100的阶乘

int main()
{
    int i=1;
    double sum=1;
    while(i<=100)
    {
        sum*=i;
        i++;
    }
    printf("%d",sum);
    printf("\n");
}