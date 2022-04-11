#include <stdio.h>

int main()
{
    /*
    异或是满足交换律的
    3^5^3=5
    3^3^5=5
    */
    int arr[] = {1,2,3,4,5,7,5,4,3,2,1};
    int sz = sizeof(arr)/sizeof(arr[0]);

    int ret = 0;
    int i = 0;
    for(i=0;i<sz;i++)
    {
        ret = ret^arr[i];  //相同的数异或等于0
    }
    printf("单身狗是%d\n",ret);

    return 0;
}