#include <stdio.h>

int main()  //找出数组中10个数的最大值
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
//  int max = 0;  如果数组中数据都为负数 那最大值则为max的初始值0  
    int max = arr[0];  //所以把max的值赋给数组中第一个数据
    int sz = sizeof(arr)/sizeof(arr[0]);  //获取数组长度
    for(i=0;i<sz;i++)  //让i遍历数组里所有的数字 i为下标 初始值为0
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d\n",max);
    
    return 0;
}