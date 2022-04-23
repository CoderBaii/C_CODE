#include <stdio.h>


int main()
{
    int i,t,sum=0;
    for(t=i=1;i<=10;)
    {
        sum+=t;i++;
        if(i%3==0)
            t=-i;
        else
            t=i;
    }
    printf("sum = %d\n",sum);
    return 0;
}



int main()
{
    int x,y,z;
    x=1;y=2;z=3;
    x=y--<=x||x+y!=z;
    printf("%d,%d\n",x,y);
}



int main()
{
    int x,y,z;
    x=1;y=1;z=0;
    x=x||y&&z;
    printf("%d,%d\n",x,x&&!y||z);
}


int main()
{
    char c1,c2;
    scanf("%4c%4c",&c1,&c2); //怎么输入使c1为A c2为B
    printf("%c%c\n",c1,c2);
}