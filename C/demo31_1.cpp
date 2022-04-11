#include <stdio.h>

int main()  //仅计算1/1+1/2+...+1/100的结果
{
    int i = 0;
    // int sum = 0;  //此处修改为double类型
    double sum = 0.0;
    for(i=1;i<=100;i++)
    {
        sum += 1.0/i;    //除号两端必须有一方为浮点数 结果求出来才为浮点数
        //1/1=1 1/2=0..2 但sum取得是整数 所以后面的都是0
    }
    printf("%lf\n",sum); //输出格式改为浮点类型

    return 0;
}