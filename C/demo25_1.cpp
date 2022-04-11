// #include<stdio.h>
// #define N 3       //可修改输入个数
// int main()
// {
//     int i,a[N],t,j;
//     for(i=0;i<N;i++) scanf("%d",&a[i]);   //输入
//     for(j=1;j<N;j++)           //N次比较
//         for(i=0;i<j;i++)         //每趟中比j次  
//             if(a[i]>a[j])            //与a[i]后面的元素进行比较
//             {
//                 t=a[i];a[i]=a[j];a[j]=t;
//             }
//             printf("排序后：\n");
//             for(i=0;i<N;i++) printf("%d ",a[i]);
//             printf("\n");
// }

#include <stdio.h>

int main()   //输出100中3的倍数
{
    int i = 0;
    for(i=1;i<=100;i++)
    {
        if(i % 3 == 0)
            printf("%d ",i);
    }
    return 0;
}