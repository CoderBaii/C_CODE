#include <stdio.h>

double Pow(int n,int k)  //n^k = n*n^(k-1)
{
    if(k < 0)
        return (1.0/(Pow(n,-k)));  //n的-3次方就为n的3次方分之1
    else if(k == 0)
        return 1;
    else
        return n*Pow(n,k-1);
}

int main()
{
    int n = 0;
    int k = 0;
    scanf("%d%d",&n,&k);
    double ret = Pow(n,k);
    printf("%lf\n",ret);
    return 0;
}