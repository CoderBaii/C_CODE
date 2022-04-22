#include <stdio.h>
//最大公约数

int Max_divisor(int num1,int num2)
{
    int tmp,a,b;
    if(num1 < num2)
    {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }
    a=num1;
    b=num2;
    while(b)
    {
        tmp = a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int main()
{
    printf("%d\n",Max_divisor(10,6));
    return 0;
}