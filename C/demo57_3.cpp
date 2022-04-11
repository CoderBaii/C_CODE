#include<stdio.h>
int main()
{
    int a,b,tmp,r,n;
    printf("请输入两个数字：\n");
    scanf("%d %d",&a,&b);
    //如果输入的两个数前小后大 此处交换位置
    if(a<b)
    {
        tmp=b;
        b=a;
        a=tmp;
    }
    r = a%b; //如果a=20 b=6 进入while循环
    n = a*b; //120
    while(r != 0) //若a%b等于0 则不进入这个循环
    {
        a=b; //a=6
        b=r; //3
        r=a%b; //r=6%3
    }
    printf("这两个数的最大公约数是%d，最小公倍数是%d\n",b,n/b);
    
    return 0;
}