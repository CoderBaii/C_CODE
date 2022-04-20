#include <stdio.h>
//选择排序

//直接交换
void sort(int a[],int n)
{
    int i,j = 0;
    int tmp = 0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++) //err!!  for(j=i+1;j<=n;j++)
        {
            if(a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }

        }
    }
}

//延迟交换
void sort(int a[],int n)
{
    int i,j,k,tmp;
    for(i=0;i<n-1;i++) //循环n-1次
    {
        k = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j] < a[k]) //a[j]是后一个元素，a[k]前一个元素
            {
                k = j;
            }
        }
        if(k != i)
        {
            tmp = a[k];
            a[k] = a[i];
            a[i] = tmp;
        }
    }
}

int main()
{
    int i = 0;
    int b[8] = {4,15,23,9,7,6,8,1};
    sort(b,8);
    for(i=0;i<8;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}