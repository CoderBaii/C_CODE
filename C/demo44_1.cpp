#include <stdio.h>

void add(int* p)  //int型指针接收
{
    (*p)++;  //++优先级较高，要括起来
}

int main()
{
    int num = 0;
    //调用函数 使num每次增加1
    add(&num);  //传址
    printf("num = %d\n",num);
    add(&num);  //传址
    printf("num = %d\n",num);
    add(&num);  //传址
    printf("num = %d\n",num);
    return 0;
}