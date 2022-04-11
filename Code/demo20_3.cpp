#include <stdio.h>

int main() //二分查找
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 12;
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]); 
    
    while(left <= right)
    {
        int mid = (left+right)/2; //计算中点
        if(arr[mid] < k)
        {
            left = mid+1; //左边起始位置变为中点再右移一个单位
        }
        else if(arr[mid] > k)
        {
            right = mid-1;
        }
        else
        {
            printf("找到了，它的下标是%d\n",mid);
            break;  //while一定要加break
        }
    }
    if(left > right)  //左右交错后左边大于右边 说明数据找完了
    {
        printf("找不到\n");
    }
    
    return 0;
}