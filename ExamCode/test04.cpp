#include <stdio.h>
#define ROW 4
#define COL 4
//找出大于0的数并相加，遇0跳过

int fun(int a[][COL],int b[])
{
    int k = 0;
    int i,sum = 0;
    for(i=0;i<ROW;i++)
    {
        int j = 0;
        for(j=0;j<COL;j++)
        {
            if(a[i][j] < 0) 
                continue;  //本次循环体内不执行
            if(a[i][j] == 0)
                break; //跳出本层循环
            b[k++] = a[i][j];
            sum += a[i][j];
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
    return sum; 
}

int main()
{
    int b[16] = {0};
    int a[ROW][COL] = {{1,2,-3,-4},{0,-12,-13,14},{-21,23,0,-24},{-31,32,-33,0}};
    printf("\n%d\n",fun(a,b));
    return 0;
}