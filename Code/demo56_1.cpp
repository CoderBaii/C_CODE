#include <stdio.h>
//求一个数的补码中1出现的次数

//如果123想得到十位 可以%1o再除10 它就会不断变小 
//123%10 = 3   123/10=12
//12%10 = 2  12/10=1
//1%10 = 1
//同理 二进制也不断模2除2
int main()
{
    int num = 0;
    int count = 0;
    printf("请输入一个整数:>");
    scanf("%d",&num); 

    while(num) //如果计算负数可以改成 unsigned int num
    {
        if(num % 2 == 1) //3 -011
            count++;
        num = num / 2;
    }
    printf("%d\n",count);

    return 0;
}