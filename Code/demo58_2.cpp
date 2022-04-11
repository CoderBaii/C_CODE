#include <stdio.h>
#include <math.h>
//输出10000以内的水仙花数

int main()
{
    int i = 0;
    for(i=100;i<100000;i++)
    {
        int sum = 0;
        int count = 1;
        int tmp = i;
        //统计位数
        while(tmp/10)  //如果i只有个位数 不执行循环
        {
            count++;
            tmp /= 10;
        }
        tmp = i;
        //每得到一位 计算和
        while(tmp)
        {
            sum += (int)pow(tmp%10,count); //每次取余的数乘以次方数(count)放到sum
            tmp = tmp/10;
        }
        if(sum == i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}