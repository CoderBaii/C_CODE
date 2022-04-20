#include <stdio.h>
//  1 
// 123
//32343

int main()
{
    int i,j,n = 3;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("%c",32); //32是空格
        }
        for(j=1;j<=2*i-1;j++)
        {
            if((i+j) % 2 == 0)
                printf("%d",i);
            else
                printf("%d",j);
        }
        printf("\n");
    }
}