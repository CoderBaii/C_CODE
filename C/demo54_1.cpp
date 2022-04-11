#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int sz = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    for(i=0;i<sz;i++)
    {
        //统计arr[i]在数组中出现了几次
        int count = 0;
        int j = 0;
        for(j=0;j<sz;j++)
        {
            if(arr[i] == arr[j])  //如果两个元素相同
            {
                count++;
            }
        }
        if(1 == count)
        {
            printf("单身狗是%d\n",arr[i]);
        }

        return 0;
    }
}