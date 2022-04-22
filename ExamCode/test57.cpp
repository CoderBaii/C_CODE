#include <stdio.h>
#define LEN 12

int main()
{
    int num[] = {3,4,5,6,7,8,9,10,11,12,13,14};
    int i,j,k,x,y;
    x=0;y=LEN-1;
    while(x<=y)
    {
        j=num[x];
        i=2;
        k=1;
        while(i<=j/2 && k)  //判断j是否为素数
        {    
            k = j%i++;
        }
        if(k)
            printf("%d ",num[x++]);
        else   //不是素数首位数据互换，尾指针前移
        {
            num[x] = num[y];
            num[y--] = j;
        }
    }
    /* 多余的打印函数
    for(i=0;i<x;i++)
    {
        printf("%d ",num[i]);
    }*/
    return 0;
}