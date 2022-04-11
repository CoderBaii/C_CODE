#include <stdio.h>
//求数组中最大值

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //定义长度为10的数组
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("%d\n",&arr[i]);
        //遍历输出数组元素地址
    }

    //找出数组中最大值
    int max = arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    //打印数组
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nmax = %d\n",max);

    return 0;
}