#include <stdio.h>
#include <math.h>

//是素数返回1 不是返回0 所以函数类型为int
int is_prime(int n)
{
    int y = 0;
    for(y=2;y<sqrt(n);y++)  //用n的开平方的数去试除n
    //如果y小于这个数的开平方就说明它不能被1和本身以外的数整除
    {
        if(n % y ==0)
            return 0;
    }
    return 1;
}

int main() //打印100到200之间的素数
{
    int i = 0;
    for(i=100;i<=200;i++)
    {
        if(is_prime(i) == 1)
            printf("%d ",i);
    }
}