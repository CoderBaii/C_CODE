#include <stdio.h>
//求11^11的个十百位上的数字之和

int main()
{
    int i,s=1,m=0;
    for(i=1;i<=11;i++)
    {
        do
        {
            m+=s%10;
            s=s/10;
        }while(s);  
    }
    printf("%d\n",m);
    return 0;
}