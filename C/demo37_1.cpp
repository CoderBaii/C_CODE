#include <stdio.h>

int add(int x,int y)  //初识函数
{
    int z = 0;
    z = x + y;
    return z;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a ,&b);
    int c = add(a,b);
    printf("%d\n",c);
}