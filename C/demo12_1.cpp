#include <stdio.h>

int main(){ //初识循环

    int input = 0;//存储输入的词
    printf("加入培训班:>\n");
    printf("那要好好学习吗(1/0)?>:");
    scanf("%d",&input);

    if(input == 1)
        printf("好offer\n");
    else
        printf("卖红薯\n");

    return 0;
}