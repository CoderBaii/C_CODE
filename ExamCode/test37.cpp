#include <stdio.h>

void *month_name(int n)
{
    char *name[] = 
    {
        "illegal month","January","February","March",
        "April","May","June","July","August","September",
        "October","November","December"
    };
    return (n<1 || n>12)?name[0]:name[n];
}

int main()
{
    int n;
    printf("Please input n:>");
    scanf("%d",&n);
    printf("Month N0.%d means %s\n",n,month_name(n));
}