#include <stdio.h>
//冒泡排序是两两比较  10个数据的话比较9次

void bubble_sort(int arr[],int sz)
{
    /*数组中n个数需要遍历n-1趟
    完成一趟交换后就减少一个数，第二次只需要对比n-i-1对
    */
    int i = 0;
    //确定每一趟冒泡
    for(i=0;i<sz-1;i++)
    {
        int flag = 1;  //假设这一趟要排序的数据已经有序
        int j = 0;
        for(j=0;j<sz-i-1;j++)  //sz-i-1的值始终在变
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag =0;  //如果至少交换了一对 说明这个数据不完全有序 那么将flag改为0
            }
        }
        if(flag == 1)
        {
            break;  //直接跳出循环
        }
    }
}

int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,sz);
    
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}