#include <stdio.h>
//使用for循环描述第n个斐波那契数

int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;

    for(int i=3;i<=n;i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = Fib(n);
    printf("%d\n",ret);

    return 0;
}