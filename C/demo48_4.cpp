#include <stdio.h>
//for循环打印斐波那契数列-Fibonacci sequence

int main()
{
    int i,n;
    int f[128] = {1,1};

    printf("请输入斐波那契数列的通项:>");
    scanf("%d",&n);
    printf("%d %d ",f[0],f[1]);
    for(i=2;i<n;i++)
    {
        f[i] = f[i-2]+f[i-1];
        //第n项等于n-2项加上n-1项
        printf("%d ",f[i]);
    }
    return 0;
}