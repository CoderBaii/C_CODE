#include <stdio.h>
//计算一个数的阶乘

int Fac1(int n)
{
    int i = 0;
    int ret = 1;
    for(i=1;i<=n;i++)  //产生(i)1到n-1的数字
    {
        ret *= i;  //累计每次i的值
    }
    return ret;
}

int main()
{
    int n = 0;
    scanf("%d",&n);  //&符号不能忘
    int ret = Fac1(n);

    printf("%d\n",ret);

    return 0;
}