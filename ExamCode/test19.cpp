#include <stdio.h>
//二分查找

/*
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k;
    printf("请输入要寻找的数字:>\n");
    scanf("%d",&k);
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0]);

    while(left <= right)
    {
        int mid = (left+right)/2;
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
            printf("找到了，下标是%d\n",mid);
            break;
        }
    }
    if(left > right) //交错
    {
        printf("找不到\n");
    }
    return 0;
}
*/

int main()
{
    int a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int i;
    int low=0;
    int high=15;
    printf("请输入一个数：\n");
    scanf("%d",&i);
    do
    {
        int mid=(low+high)/2;
        if(i > a[mid])
        {
            low = mid + 1;
        }
        else if(i < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            printf("%d\n",mid+1);
            break;
        }
    }while(low <= high);
    if(low > high)
    {
        printf("找不到\n");
    }
    
    return 0;
}