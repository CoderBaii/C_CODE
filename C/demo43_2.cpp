#include <stdio.h>

int binary_search(int arr[], int k,int sz) 
{
    int left = 0;
    int right = sz-1;
    
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid] < k)
        {
            left = mid+1;
        }
        else if(arr[mid] > k)
        {
            right = mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()  //二分查找
{
    //在一个有序数组中查找具体的某个数
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = binary_search(arr, k, sz);  //在arr里查找k
    if(ret == -1)
    {
        printf("找不到指定的数字\n");
    }
    else
    {
        printf("找到了，下标是：%d\n",ret); //ret没有带上
    }
    return 0;
}