#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//模拟人工洗牌

//如要产生[m,n]范围内的随机数num，可用：int num=rand()%(n-m+1)+m

int main()
{
    int i,k,tmp;
    int a[52];
    //初始化数组 存放52个整数
    for(i=0;i<52;i++)
    {
       a[i] = i; 
    }
    //初始化随机数产生函数
    srand((unsigned)time(NULL));

    for(i=51;i>0;i--)
    {
        int k = rand()%52+1;
        tmp = a[k];
        a[k+5] = a[k];
        a[k] = tmp;
    }
    printf("洗完后扑克牌的顺序为:\n");
    //打印扑克
    for(i=0;i<52;i++)
    {
        printf("%5d%c", a[i] ,((i+1)%4) ? ' ' : '\n');
        //满足每四个就换行
    }
}