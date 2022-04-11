#include <stdio.h>
#define ARRLEN 5

//打印函数
void print(int arr[])
{
    int i =  0;
    for(i=0;i<ARRLEN;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

//此处制定交换规则
void swap(int* a,int* b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

//完成交换
//一个数组作为参数时，默认传的都是他的第一个元素的地址，不用加上 & 
//但对于他的元素来讲，应当加上&
void swap_arr(int* arr_a,int* arr_b)
{
    for(int i = 0;i<ARRLEN;i++)
    {
        swap(&arr_a[i], &arr_b[i]);
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};
    swap_arr(a,b); //交换
    print(a);  //打印
    print(b);
}