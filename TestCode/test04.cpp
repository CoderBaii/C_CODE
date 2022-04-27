#include <stdio.h>
#include <math.h>
//玫瑰花数

int main()
{
    int i=0;
    for(i=1000;i<10000;i++)
    {
        int n=1;
        int tmp = i;
        int sum=0;
        while(tmp/10)
        {
            n++;
            tmp /= 10;
        }
        tmp = i;
        while(tmp)
        {
            sum += (int)pow(tmp%10,n);
            tmp /= 10;
        }
        if(sum == i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}