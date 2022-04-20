#include <stdio.h>
//平均值

float average(int *pa,int n)
{
    int k;
    float avg;
    for(k=0;k<n;k++)
    {
        avg = avg + pa[k];  //(pa+k)
    }
    avg /= n;
    return avg;
}

int main()
{
    int a[5] = {20,30,45,64,23};
    float m;
    m = average(a,5);
    printf("Average=%f\n",m);
    return 0;
}