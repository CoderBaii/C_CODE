#include <stdio.h>

int main(){ //计算一个数的阶乘

    int i = 0;
    int n = 0;
    int ret = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ret*=i;
    }
    printf("ret = %d\n",ret);

    return 0;
    
    // int i = 0;
    // int n = 0;
    // int sum = 1; //将阶乘的值存放到sum
    // scanf("%d",&n);
    // for(i=1;i<=n;i++)
    // {
    //    sum*=i;  //sum=sum*i
    // }
    // printf("sum = %d\n",sum);
    // return 0;
}