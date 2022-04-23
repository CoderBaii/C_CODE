#include <stdio.h>
//输出数组中的偶数

int main()
{
    int x,i,j=0,n=0;
    int b[51] = {7,16,5,4,6,7,9,8,3,2,4,6,12,2,-1};
    scanf("%d",&x);
    while(x>-1)
    {
        b[++n] =x;
        scanf("%d",&x);  //7 16 5 4 6 7 9 8 3 2 4 6 12 2 -1
    }
    for(i=0;i<=n;i++) //n=14
    {
        if(b[i]%2==0) b[++j]=b[i];   
    }
        
    for(i=1;i<=j;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}