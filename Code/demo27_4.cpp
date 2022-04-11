#include <stdio.h>

int x = 0;
int count = 0;

int main()
{
    for(x=101;x<=200;x+=2)
    {
        int y = 0;
        for(y=2;y<x/2;y++)  //除了2以外，所有可能的质因数都是奇数，先尝试2，再尝试从3开始直到x/2的所有奇数
        {
            if(x%y == 0)
            {
                break;
            }
        }
        if(y == x/2)
        {
            count++;
            printf("%d ",x);
        }
    }
    printf("\n素数有%d个",count);
    return 0;
}