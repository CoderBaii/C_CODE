#include <stdio.h>
//使用递归计算一个数的阶乘

int Fac2(int n)
{
    if(n<=1)  //如果n<=1那么它的阶乘就是1
        return 1;
    else
        return n*Fac2(n-1);   //如果n>1那么它的阶乘就是n*n-1的阶乘..
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = Fac2(n);
    printf("%d\n",ret);

    return 0;
}