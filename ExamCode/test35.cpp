#include <stdio.h>
/*打印 
1  0  0  0  0
2  1  0  0  0
3  2  1  0  0
4  3  2  1  0
5  4  3  2  1
*/

int main()
{
     int a[5][5],i,j;
     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
            if(i < j)
                a[i][j] =  0;
            else a[i][j] = i+1-j;
            printf("%3d",a[i][j]);
         }
         printf("\n");
     }
}