#include <stdio.h>

int main()
{
    int n = 0;
    int count = 0;
    printf("请输入一个整数:");
    scanf("%d",&n);

    int i = 0;
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            count++;  //素数个数加1
        }
    }
    if(count == 0) //i%n不为0 判定为素数
    {
        printf("%d是素数\n",n);
    }
    else
    {
        printf("%d不是素数\n",n);
    }

    return 0;
}