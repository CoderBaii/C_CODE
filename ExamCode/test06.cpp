#include <stdio.h>
#include <math.h>
//素数

int fun()
{
    int m,i,k,n = 0;
    for(m=201;m<=300;m+=2)
    {
        k = sqrt(m+1);
        for(i=2;i<=k;i++)
        {
            if(m % i == 0)
                break;
            
        }
        if(i == k+1) //i>k
        {
            printf("%-4d",m);
            n++;
            //输出10个数后换行
            if(n%8 == 0)
            printf("\n");
        }
    }
    return n;
}

int main()
{
    int num;
    printf("\n");
    num = fun();
    printf("\nThe total of prime is %d",num);
    getchar();
}


//素数

int main()
{
    int a[100];
    int i, j;
    for (i = 0; i < 100; i++)
    {
        a[i] = i;
    }
    for (i = 2; i < sqrt(100); i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            if (a[j] != 0 && a[i] != 0)
            {
                if (a[j] % a[i] == 0)
                {
                    a[j] = 0;
                }
            }
        }
    }
    int count = 0;
    for (i = 2; i < 100; i++)
    {
        if (a[i] != 0)
        {
            count++;
            printf("%5d ", a[i]);
        }
        if (count % 10 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}