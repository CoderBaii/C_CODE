#include <stdio.h>
#include <malloc.h>
//输入一个数字n 打印nxn的矩形 且对角线都为1

int main()
{
    int n,i,j,*p;
    //判断输入数字
    do
    {
        printf("请输入一个数字:>");
        scanf("%d",&n);
    }while(n <= 0);
    p = (int*)malloc(n*n*sizeof(int));

    if(p == NULL)
    {
        printf("内存不足，程序终止！\n");
        exit(0);
    }
    for(i=0;i<n*n;i++)
    {
        *(p+i) = 0;
    }
    for(i=0;i<n;i++)
    {
        *(p + n*i + i) = 1;
        *(p + (n-1)*(i+1) ) = 1;  //n-1
        
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",*(p+n*i+j));
        }
        printf("\n");
    }
    free(p);
    return 0;
}