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

/*
#include <stdio.h>
//冒泡排序

void Bubble_sort(int a[],int sz)
{
    int i = 0;
    for(i=0;i<sz-1;i++)
    {
        int j = 0;
        int flag = 1; //假设已经有序
        for(j=0;j<sz-1-i;j++)
        {
            if(a[j] > a[j+1]) //相邻的两个元素比较
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                flag = 0; //如果进入循环说明至少交换了一次，所以flag为假
            }
        }
        if(flag == 1) //如果数组已经有序，就不进入if,flag为真直接跳出循环
        {
            break;
        }
    }
}

int main()
{
    int arr[10] = {1,2,4,3,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    Bubble_sort(arr,sz);

    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }

}
*/
