#include <stdio.h>
//打印杨辉三角

int main()
{
    int arr[10][10] = {0};
    int i,j = 0;
    int space;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            arr[i][0]= 1;
            arr[i][i]= 1;
            // if(j == 0)  //第1列
            // {
            //     arr[i][j] = 1;
            // }
            // if(i == j)  //对角线
            // {
            //     arr[i][j] = 1;
            // }
            //计算
            if(i >= 2 && j >= 1)
            {
                //i为2 j为1 
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            }
        }
    }

    for(i=0;i<10;i++)
    {
        int j,k = 0;
        //打印空格
        for(k=1;k<=10-i;k++)
        {
            printf("  ");
        }
        //打印数据
        for(j=0;j<=i;j++)
        {
            printf("%-4d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}