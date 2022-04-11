#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
    printf("*******************************\n");
    printf("***** 1. play     0. exit *****\n");
    printf("*******************************\n");
}

void game()
{
    //生成一个随机数
    int ret = 0;  //存放随机数
    int guess = 0; //接收用户输入数字

    ret = rand()%100+1;  //生成随机数
    //对随机数取余 再加1 生成的数字就在1~100

    while(1)
    {
        printf("请您猜数字：");
        scanf("%d", &guess);
        if(guess > ret)
        {
            printf("猜大了\n");
        }
        else if(guess < ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break;
        }
    }

}

int main()
{
    int input = 0;   //srand设置随机数的生成器
    srand((unsigned int)time(NULL));  //时间戳 把时间作为生成随机数的起点  time为长整型
    //时间戳是现在的时间和1970.1.1 0:0:0的差值 单位是s
    do{  //游戏至少执行一次 就使用do..while
        menu();
        printf("请选择>: ");
        scanf("%d", &input);  //读取输入数字1或者0   &取地址
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    }while(input);  //若while不为0 则跳回菜单
    return 0;
}