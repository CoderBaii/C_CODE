#include <stdio.h>
//从10个数中找出最大值和最小值

int max,min;

void find_max_min(int *p,int n)
{
    int *q;
    max = min = *p;
    for(q=p;q<p+n;q++)
    {
        if(max < *q)
            max=*q;
        else if(min>*q)
            min=*q;
    }
}

int main()
{
    int i,num[10];
    printf("Imput 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        find_max_min(num,10);
    }
    printf("max=%d,num=%d\n",max,min);
    return 0;
}