#include <stdio.h>
//分别打印一个数二进制的奇数位和偶数位

void print(int n)
{
    int i = 0;
    printf("奇数位:>");
    for(i=30;i>=0;i-=2) //从30(下标)位开始打印 每次-2
    {
        printf("%d ",(n >> i) & 1);
        //n向右移动i位再与上1就得到了这一位
    }
    printf("\n");
    printf("偶数位:>");
    for(i=31;i>=1;i-=2) //从31(下标)位开始打印 每次-2
    {
        printf("%d ",(n >> i) & 1);
    }
    printf("\n");
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    print(n);
    return 0;
}