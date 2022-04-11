#include <stdio.h>

int i = 0;
// int j = 0;

int main()  //输出100的数字出现了几个9
{
    for(i=9;i<=100;i++)
    {
        if((i-9) % 10 == 0)
        {
            printf("%d ",i);
        }
        if(i/ 10 == 9)
        {
            printf("%d ",i);
        }
    }
    return 0;
}