#include <stdio.h>
#include <stdlib.h>
#define NUM 10
//删除一维整形数组a中的下标为d的数组元素

void arrout(int w[],int m)
{
    int k;
    for(k=0;k<m;k++)
    {
        printf("%4d",w[k]);
    }
    printf("\n");
}

arrdel(int *w,int n,int k)
{
    int i;
    for(i=k;i<n-1;i++)
    {
        w[i] = w[i+1]; //把后面的元素前移
        n--;
        return n;
    }
}

getindex(int n)
{
    int i;
    do
    {
        printf("Enter the index [0<=i<=%d]:",n-1);
        scanf("%d",&i);
    }while(i<0 || i >n-1);  //下标越界会重新输入
    return i;
}

int main()
{
    int n,d;
    int a[NUM] = {21,22,23,24,25,26,27,28,29,30};
    system("cls");
    n = NUM;
    printf("Nouput primary data:\n");
    arrout(a,n);  //arrout函数，用来输出数组中的全部元素
    d = getindex(n);  //输入被删除数组元素所在的下标
    n = arrdel(a,n,d);  //arrdel - 进行删除运算
    printf("Nouput primary data:\n");
    arrout(a,n);
}