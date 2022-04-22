#include <stdio.h>

int main()
{
    int a,b,c,i;
    a=c=0;
    for(i=0;i<=10;i+=2)
    {
        a += i;
        b = i+1;  //多加了11
        c += b;
    }
    printf("偶数之和=%d\n",a);
    printf("奇数之和=%d\n",c-11);  //c-b也可以
    return 0;
}