#include <stdio.h>
//二分查找

int main()
{
    int a[8] = {6,12,18,42,46,52,67,73};
    int low=0,mid,high=7,x;
    printf("Input a x:");
    scanf("%d",&x);
    while(low<=high)
    {
        mid = (low+high)/2;
        if(x>a[mid])
            low = mid+1;
        else if(x<a[mid])
            high = mid-1;
        else
            break;
    }
    if(low<=high)
        printf("Search successful!The index is:%d\n",mid);
    else
        printf("Can not search!\n");
    return 0;
}