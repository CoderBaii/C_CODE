#include <stdio.h>

int main(){  //计算1到10的阶乘
    int i = 0;
    int n = 0;
    int sum = 0;
    for(n=1;n<=10;n++)
    {
        int ret = 1;
        for(i=1;i<=n;i++)
        {
            ret*=i;
        }
        sum+=ret;
    }
    printf("sum = %d\n",sum);

    return 0;
}