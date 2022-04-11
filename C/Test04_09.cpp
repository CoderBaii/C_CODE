#include <stdio.h>
#include <stdlib.h>

/*
int Fun(int n)
{
    if(n==5)
        return 2;
    else
        return 2*Fun(n+1);
}
//Fun(2) 返回值是16
*/

/* 阶乘
int main()
{
    int a = 0;
    int sum = 0;
    scanf("%d",&a);
    int i = 0;
    for(i=1;i<=a;i++)
    {
        int j = 0;
        int ret = 1;
        for(j=1;j<=i;j++)
        {
            ret *= j;
        }
        sum += ret;
    }
    printf("%d\n",sum);
}
*/

/*
//栈区的默认使用：先使用高地址处的空间，再使用低地址处的空间
//数组随着下标的增长地址是由低到高
//所以数组越界访问就可能遇到i 导致死循环
int main()
{
    int i = 0;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<=12;i++)
    {
        printf("hehe\n");
        arr[i] = 0;
    }
    system("pause");
    return 0;
}
*/