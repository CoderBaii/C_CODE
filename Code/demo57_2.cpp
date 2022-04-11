#include <stdio.h>
#include <math.h>

int gcd(int a,int b);
int lcm(int a,int b);

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF)
    {
        printf("最大公约数：%d \n最小公倍数：%d\n",gcd(a,b),lcm(a,b));
        break;
    }
    return 0;
}

int gcd(int a,int b)
{
    return a%b ? gcd(b,a%b):b;
    //先判断a%b是否为0
    //不为0的话，则继续用被除数作为除数，用上一步的余数作为除数继续运算
    //是0的话则b就位两数的最大公约数,则返回b
}

int lcm(int a,int b)
{
    return a * b /gcd(a,b);
    //两数乘积除以最大公约数即为最小公倍数
}