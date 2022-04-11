#include <stdio.h>
//输入一个数 打印这个数的乘法表 -如果是12 就为12x12

void print_table(int n)
{
    int i = 0;
    for(i=1;i<=n;i++) //确定行数
    {
        for(int j = 1;j<=i;j++) //i为1时只有1项 
        {
            printf("%d*%d=%-3d ",i,j,i*j);
        }
        printf("\n");
    }
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    print_table(n);
    return 0;
}