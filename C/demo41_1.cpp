#include <stdio.h>
#include <math.h>

//是素数返回1 不是返回0 所以函数类型为int
int is_prime(int n)
{
    int y = 0;
    for(y=2;y<n;y++) //产生2~n-1的数去试除n
    {
        if(n % y ==0)
            return 0;  //直接结束函数
    }  //只有y=n一种情况
    return 1;
}

int main() //打印100到200之间的素数 demo42
{
    int i = 0;
    for(i=100;i<=200;i++)
    {
        if(is_prime(i) == 1)
            printf("%d ",i);
    }
}