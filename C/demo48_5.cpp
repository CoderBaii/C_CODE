#include <stdio.h>
//直接输出斐波那契数列20位

int main()
{
    int i,f[20]={1,1};
    printf("%d %d ",f[0],f[1]);
    for(i=2;i<20;i++)
    {
        f[i] = f[i-2]+f[i-1];
        printf("%d ",f[i]);
    }
}