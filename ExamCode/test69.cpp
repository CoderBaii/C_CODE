#include <stdio.h>
#include <string.h>
//二分查找

void search(int a[],int b,int sz)
{
    int left = 0;
    int right = sz;
    while (left <= right)
    {
        int mid = (left+right)/2;
        if (a[mid] < b)
        {
            left = mid+1;
        }
        else if(a[mid] < b)
        {
            right = mid-1;
        }
        else
        {
            printf("找到了，下标是%d\n",mid);
            break;
        }
    }
}

int main()
{
    int k;
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("请输入要查找的数字:\n");
    scanf("%d", &k);
    int sz = sizeof(a)/sizeof(a[0]);
    search(a,k,sz);
    return 0;
}