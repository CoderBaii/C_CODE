#include <stdio.h>
//喝汽水问题,一瓶1元，两个空瓶交换一瓶汽水

/*
int main()
{
    int money = 0;
    int total = 0;
    int empty = 0;
    printf("请输入你的余额:>");
    scanf("%d",&money);
    //喝掉的汽水数量
    total = money;
    //空瓶的数量
    empty = money;

    while(empty >= 2)
    {
        //两瓶交换一瓶汽水
        total += empty/2; //不断减少
        empty = empty/2 + empty%2;  //产生新的空瓶数
    }
    printf("你可以喝%d瓶汽水\n",total);

    return 0;
}
*/

int main()
{
    
    int money = 0;
    int total = 0;
    int empty = 0;
    printf("请输入你的余额:>");
    scanf("%d",&money);
    if(money == 0)
        total = 0;
    else
        total = 2 * money - 1;
    printf("你可以喝%d瓶汽水\n",total);
}