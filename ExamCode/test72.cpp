#include <stdio.h>
//通过赋初值按行顺序为一个2x3的二维数组赋予2，4，6等偶数
//然后按列的顺序输出该数组

int main()
{
    int a[2][3] = {0};
    int i, j,n=0;
    int count = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = n+=2;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0;j < 2;j++)
        {
            count++;
            printf("%d ", a[j][i]);
            if(count % 2 ==0)
            {
                printf("\n");
            }   
        }
    }
    return 0;
}