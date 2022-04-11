#include <stdio.h>

int i = 0;
// int j = 0;
int count = 0;

int main()  //输出100的数字出现了几个9
{
    for(i=9;i<=100;i++)
    {
        if(i % 10 == 9)
        {
            count++;
        }
        if(i/ 10 == 9)
        {
            count++;
        }
    }
    printf("100以内的数字有%d个九 ",count);
    return 0;
}