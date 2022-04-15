#include <stdio.h>
#include <stdlib.h>
//qsort

int compare(const void* a, const void* b)
{
    int *pa = (int*)a; //强制类型转换
    int *pb = (int*)b;
    // int num1 = *pa;
    // int num2 = *pb;
    //return num1 - num2;
    return *pa - *pb;
}

int main()
{
    int arr[8] = {1,2,3,5,8,9,7,6};
    qsort(arr,8,sizeof(int),compare);

    int i = 0;
    for(i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}