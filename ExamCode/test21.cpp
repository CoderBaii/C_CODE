#include <stdio.h>
//AB*BA=403 使用以下程序寻找a b两数

int main()
{
    int a,b,k;
    int plu = 403;
    for(a=1;a<10;a++)
    {
        for(b=1;b<10;b++)
        {
            k = (a*10+b) * (b*10+a);
            if(k==plu)
                printf("%d,%d\n",a,b);
        }
    }
}