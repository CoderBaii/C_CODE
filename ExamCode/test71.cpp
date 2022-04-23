#include <stdio.h>

int main()
{
    int a[5][5] = {0};
    int i,j,n=1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j] = n++;
        }
    }
    
    for(i=0;i<5;i++)
    {

        for(j=1;j<=5-i;j++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    /*
    for(i=0;i<5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("  ");
        }
        for(j=4;j>i;j--)
        {
            printf("%-4d",a[i][j]);
        }
        printf("\n");
    }
    */
    return 0;
}