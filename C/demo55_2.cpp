#include <stdio.h>
//计算用户输入两个数之间的阶乘

int main()
{
    int a,b,c=1;
    double sum = 1;
    printf("请输入两个数:>");
    scanf("%d %d",&a,&b);

    //判断用户输入的数字是否为前小后大 是则直接计算
    if(a < b)
    {
        for(c=a;c<=b;c++)  //若a为3 b为5 <c=3 3<=5 3++>
        {
            sum *= c;
        }
        printf("%d到%d的累乘为:%0.0lf\n",a,b,sum);
    }

    //如果用户输入的数字不满足前大后小
    else
    {
        if(a == b)
        {
            printf("请输入两个不同的数字\n");
        }
        else
        {
            //用户输入的数字为前大后小
            for(c=a;c>=b;c--)  //若a为5 b为3 c=5 5>=3 3-->
            {
                sum *= c;
            }
            printf("%d到%d的累乘为:%0.0lf\n",a,b,sum);   
            //%lf输出保留小数点后六位 
            //%0.0lf输出保留整数位
        }
    }

}