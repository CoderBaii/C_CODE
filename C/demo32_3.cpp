#include "stdio.h"

int main(int argc,char *argv[])  //找出数组中10个数的最大值
{  
    int a[10],i,max_i;  //max_i为下标
    printf("请输入10个数字...\n");

    for(max_i=i=0;i<10;i++){
        scanf("%d",a+i);
        if(a[max_i]<a[i])
        max_i=i;
    }
    
    printf("The MAX is %d\n",a[max_i]);
    
    return 0;
}