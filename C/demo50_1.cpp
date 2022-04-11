#include <stdio.h>
#include <string.h>
//数组

int main()
{
    /*逐个打印字符
    char arr[] ={"abcdefg"};

    int i = 0;
    int sz = strlen(arr);
    for(i=0;i<sz;i++)
    {
        printf("%c ",arr[i]);
    }
    */

    /*
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    */

    
    int arr[3][4] = {{1,2,3,4},{5,6}};
    int i = 0;
    for(i=0;i<3;i++)
    {
        int j = 0;
        for(j=0;j<4;j++)
        {
            // printf("%d ",arr[i][j]); //打印第i行第j个元素
            printf("%p ",&arr[i][j]); //打印地址
        }
        printf("\n");
    }
    return 0;
}