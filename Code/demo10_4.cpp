#include <stdio.h>
//使用指针打印数组

void print(int* p,int sz)
{
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",*(p + i));
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    print(arr,sz);
}