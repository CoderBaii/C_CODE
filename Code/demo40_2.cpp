#include <stdio.h>

void Swap(int* pa,int* pb)  //交换位置
{                           //int* p 是指针变量  *pa就说数据a的地址
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 30;
    int b = 20;
    printf("a=%d b=%d\n",a,b);
    Swap(&a,&b); //ab的地址
    printf("a=%d b=%d\n",a,b); 
    
    return 0;
}