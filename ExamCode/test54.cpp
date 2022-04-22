#include <stdio.h>

int main()
{
    int a[9] = {0,6,12,18,42,46,52,67,73};
    int x=52;
    int i,n=9,m;
    i = n/2+1;
    m = n/2;
    while(m!=0)
    {
        if(x<a[i])
            i=i-m/2-1;
        else if(x>a[i])
            i=i+m/2+1;
        else 
            break;
        m=m/2;
    }
    if(m)
        printf("%d\n",i);  //5
    else
        printf("Can not search.");

    return 0;
}