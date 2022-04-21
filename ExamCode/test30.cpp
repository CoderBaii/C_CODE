#include <stdio.h>
#define N 14

int main()
{
    int i,j,k,n=0,a[N][N];
    do
    {
        printf("请输入要打印的行数:>\n");
        scanf("%d",&n);
    }while(n <=0 || n >= 13);  //小于0或者大于13，重新输入

    printf("%d行杨辉三角如下:>\n",n);
    for(i=1;i<=n;i++)
    {
        //循环从1开始 所以是a[i][1]
        a[i][1] = a[i][i] = 1;  //第1列和对角线全为1
    }

    for(i=3;i<=n;i++)  //第三行
    {
        for(j=2;j<=i-1;j++)  //第二列
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}