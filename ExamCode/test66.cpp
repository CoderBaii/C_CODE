#include <stdio.h>
//求a的n次方

double mypow(double x,int y)
{
    if(y>0 && y<=1)
        return x;
    else
        return x*mypow(x,y-1);
    /*
    double ret = 1;
    for(;y>0;y--)
    {
        ret = ret*x;
    }
    return ret;
    */
}

int main()
{
    double a = 0.0;
    int n = 0;
    scanf("%lf %d",&a,&n);
    printf("%-8.2lf\n",mypow(a,n));
    return 0;
}