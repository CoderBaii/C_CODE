#include <stdio.h>
//描述第n个斐波那契数  使用递归效率太

int Fib(int n)
{
    if(n<=2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}

//斐波那契数列 1 1 2 3 5 8 13 前两个数字的和是后一个数的值
//所以n<=2 前两位都是1
//n>2时 第n位就是n-1 + n-2
//比如n=5 那么第五位前两位就是1-1 和 5-2 

int main()
{
    int n = 0;
    scanf("%d",&n);
    //int ret = Fib(n);
    //printf("%d\n",ret);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",Fib(i));
    }
    
    return 0;
}