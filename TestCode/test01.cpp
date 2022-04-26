#include <stdio.h>

int sum(int a, int b,int c,int d,int e)
{
    return a + b + c + d + e;
}

double avg(int a,int b,int c,int d,int e)
{
    double sums = 0;
    sums = sum(a,b,c,d,e);
    return sums/5.0;
}

int main()
{
    int a,b,c,d,e = 0;
    printf("请输入任意学生的5门功课成绩:>\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("他的总成绩为%d\n",sum(a,b,c,d,e));
    printf("他的平均成绩为%4.2f\n",avg(a,b,c,d,e));
    return 0;
}
