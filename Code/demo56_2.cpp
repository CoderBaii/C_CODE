#include <stdio.h>
//求一个数的补码中1出现的次数

int main()
{
    int num = 0;
    int count = 0;
    printf("请输入一个整数:>");
    scanf("%d",&num); 

    for(int i = 0;i < 32;i++) //把32个比特位每个按位与1  两位都为1 结果才是1
    {
        if(1 ==((num >> i) &1)) //i++ num每次右移一位
        {
            count++;
        }
    }
    printf("%d\n",count);


    return 0;
}