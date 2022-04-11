#include <stdio.h>

int main(){  //二分查找
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 6;
    int left = 0; //左下标
    int right = sizeof(arr)/sizeof(arr[0]);  //计算数组长度

    while(left<=right){ //左边小于等于右边
        int mid = (left+right)/2;  //计算左右下标的中间元素
        if(arr[mid] < k)
        {
            left = mid+1;
        }
        else if(arr[mid] < k)
        {
            right = mid-1;
        }
        else
        {
            printf("找到了，它的下标是%d\n",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("找不到咯\n");
    }
    return 0;
}

// int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int left = 0;  //左下标
//     int right = sz -1;

//     while(left<=right)
//     {
//         int mid = (left+right)/2; //找出中间元素的下标
//         if(arr[mid] > k) //中间元素大于k
//         {
//             right = mid-1;
//         }
//         else if(arr[mid] < k)
//         {
//             left = mid+1;
//         }
//         else
//         {
//             printf("找到了，下标是%d\n",mid);
//             break;
//         }
//     }
//     if(left>right)
//     {
//         printf("找不到\n");
//     }

//     return 0;