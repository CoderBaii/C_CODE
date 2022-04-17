#include <stdio.h>
#include <stdlib.h>
//qsort比较浮点数

int compare(const void *a,const void *b)
{
    return ((int)(*(float*)a - *(float*)b));

    /*
    if(*(float*)a == *(float*)b)
        return 0;
    else if(*(float*)a > *(float*)b)
        return 1;
    else
        return -1;
    */
}

int main()
{
    float arr[8] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),compare);
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%lf  ",arr[i]);
    }
    printf("\n");
    return 0;
}