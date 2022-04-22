#include <stdio.h>
//插入法对数组a降序排序

int main()
{
    int a[5] = {4,7,8,2,5};
    int i,j,m;
    for(i=1;i<5;i++)
    {
        m = a[i];
        j = i-1; //j不断在增大
        while(j>=0 && m>a[j]) //m是第二个元素 a[j]为首元素
        {
            a[j+1] = a[j];  //首元素元素后移
            j--;
        }
        a[j+1] = m;   //把后移的首元素再次赋给m
    }
    //打印数组
    for(i=0;i<5;i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
    return 0;
}