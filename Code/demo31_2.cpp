#include <stdio.h>

int main()  //计算1/1-1/2+...+1/99-1/100的结果(加减交替)
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for(i=1;i<=100;i++)
    {
        sum += flag * 1.0/i;  //flag为1 积不变
        flag = -flag;  //第一次为1 第二次为-1 第三次负负得正为1...
    }
    printf("%lf\n",sum);

    return 0;
}