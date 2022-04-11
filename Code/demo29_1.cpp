#include <stdio.h>

int main()
{
    int a = 0, b = 0 ;
    for(a=1,b=1;a<=100;a++)  //b的值为4 7 10 13 16 19 22，a加了七次
    {
        if(b>=20)
            break;
        if(b%3 == 1)
        {
            b = b + 3;
            continue;
        }
        b = b - 5;  //永远没机会执行
    }
    printf("%d\n",a);

    return 0;
}