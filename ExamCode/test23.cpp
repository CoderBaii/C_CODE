#include <stdio.h>
#include <stdlib.h>
//证明哥德巴赫猜想，从键盘上输入一个大于6的偶数，找到两个素数，使之和为该偶数

int prime(int n)
{
    int k,flag=1;
    for(k=2;k<=n/2+1;k++)
    {
        if(n%k==0)
        {
            flag = 0;
        } 
    }
    return flag;
}

int main()
{
    int num,a;
    system("cls");
    do
    {
        printf("请输入一个大于6的偶数:>");
        scanf("%d",&num);
    }while(num<=6||num%2==1);

    for(a=2;a<=num/2+1;a++)
    {
        if(prime(a) && prime(num - a))
            printf(" %d = %d + %d \n",num,a,num-a);
    }
}