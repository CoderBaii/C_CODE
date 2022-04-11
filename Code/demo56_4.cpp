#include <stdio.h>
//求一个数的二进制(补码)中1出现的次数

int get_count(unsigned int n)
{
    int count = 0;
    while(n)
    {
        if(n % 2 == 1)
        {
            count++;
        }
        n = n/2;
    }
    return count;
}

int main()
{
    int n  = 0;
    printf("请输入一个数:>");
    scanf("%d",&n);
    int count = get_count(n);
    printf("该数二进制位中的1有%d个\n",count);
}