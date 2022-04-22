#include <stdio.h>
// #include <string.h>
// #include <math.h>

int fun2(int a[],int n,int b[],int c[])
{
    int nb=0,i,j,t,min;
    for(i=0;i<n;i++)
    {
        if(a[i]> -20)
            b[nb++] = a[i];  //大于-20的赋给b数组
    }
    for(i=0;i<nb;i++)  //nb - 8
    {
        c[i] = b[i];  //把b数组的内容存到c数组
    }
    //排序
    for(i=0;i<nb-1;i++)
    {
        min = i; //假设最小值为i
        for(j=i;j<nb;j++) //i赋给j
        {
            if(c[min]>c[j])
                min = j;
        }
        if(min != i)
        {
            t = c[min];
            c[min] = c[i];
            c[i] = t;
        }
    }
    return nb;
}

int main()
{
    int n = 10,i,nb;
    int aa[10] = {12,-10,-31,-18,-15,50,17,15,-20,20};
    int bb[10],cc[10];
    printf("There are %2d elements in aa.\n",n);

    printf("There are:");
    for(i=0;i<n;i++)
    {
        printf("%6d",aa[i]);
    }
    printf("\n");
    nb = fun2(aa,n,bb,cc);

    printf("Elements in bb are:");
    for(i=0;i<nb;i++)
    {
        printf("%6d",bb[i]);
    }
    printf("\n");

    printf("Elements in cc are:");
    for(i=0;i<nb;i++)
    {
        printf("%6d",cc[i]);
    }
    printf("\n");

    printf("There are %2d elements in bb.\n",nb);
    return 0;
}