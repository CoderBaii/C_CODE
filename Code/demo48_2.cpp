#include <stdio.h>
//使用while循环描述第n个斐波那契数

int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;

    while(n>2)  //斐波那契数列前两位都是1
    {
        c = a + b;
        a = b;
        b = c;
        n--;  //算过一次后面就不用算了
        //如果求第四个斐波那契数只需要执行两次,第五个执行三次
        //1 1 2 3 5 8 13 21 34 55
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