#include <stdio.h>
//两个int(32位)整数m和整数n的二进制表达中有几个比特位不同

int get_count(int n)
{
    int count = 0;
    while(n)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}

int get_diff_count(int m,int n)
{
    int tmp = m^n;  //按位异或
    return get_count(tmp);
}

int main()
{
    int m,n  = 0;
    printf("请输入两个数:>");
    scanf("%d%d",&m,&n);
    int count = get_diff_count(m,n);
    printf("这两个数的二进制位不同的有%d个\n",count);
}