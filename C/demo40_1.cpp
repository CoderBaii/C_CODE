#include <stdio.h>       //！！错误方法

void Swap(int x,int y)  //交换位置
{
    int tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 30;
    int b = 20;
    printf("a=%d b=%d\n",a,b);
    Swap(a,b);
    printf("a=%d b=%d\n",a,b); //形参不能改变实参 交换不了
    
    return 0;
}
