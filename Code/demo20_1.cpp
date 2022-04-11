#include <stdio.h>

int main(){  //这种方式效率很低
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    int k = 7;  //需要寻找的数
    int sz = sizeof(arr)/sizeof(arr[i]); //获取数组的长度
    for(i=0;i<sz;i++)
    {
        if(k == arr[i])
        {
            printf("找到了，下标是%d\n",i);
            break;
        }
        
    }
    if(i == sz)
        printf("找不到");
    return 0;
}