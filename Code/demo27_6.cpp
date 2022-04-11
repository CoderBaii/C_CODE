#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0;
    int i = 0;

    printf("请输入一个整数:");
    scanf("%d",&n);

    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)  //输入的数试除i
        {
            break;
        }
    }
    if(i > sqrt(n))
    {
        printf("%d是素数\n",n);
    }
    else
    {
        printf("%d不是素数\n",n);
    }
}