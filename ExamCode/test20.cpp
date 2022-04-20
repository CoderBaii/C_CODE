#include <stdio.h>

void score(int a[10][5])
{
    double g,n,m;
    float x[10],y[5];
    int i,j,max;
    for(i=0;i<10;i++)
    {   float tmp = 0.0;
        for(j=0;j<5;j++)
        {
            tmp +=(float)a[i][j]/5;
            x[i] = tmp;
        }
    }
    printf("每个学生的平均分是:");
    for(i=0;i<10;i++)
    {
        printf("%5.1f",x[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        float tmp = 0.0;
        for(j=0;j<10;j++)
        {
            tmp +=(float)a[j][i]/10;
            y[i] = tmp;
        }
    }
    printf("每科的平均分是：");
    for(i=0;i<5;i++)
    {
        printf("%5.1lf",y[i]);
        }
        printf("\n");
        for(i=0;i<10;i++)
        {
            for(j=1;j<5;j++)
            {
                if(a[0][0]<a[i][j])
                {
                    max=a[0][0];
                    a[0][0]=a[i][j];
                    a[i][j]=max;
                }
            }
        }
        printf("最高的分数是：%d",a[0][0]);
        printf("\n");
        for(i=0;i<10;i++)
        {
            n+=x[i];
            m+=x[i]*x[i];
        }
        g=m/10-(n/10)*n/10;
        printf("方差是%5lf",g);
        printf("\n");
}

int main()
{
    int a[10][5]={{88,90,92,94,96},{88,90,92,94,96},{88,90,92,94,96},
    {88,90,92,94,96},{88,90,92,94,96},{88,90,92,94,96},{88,90,92,94,96},
    {88,90,92,94,96},{88,90,92,94,96},{88,90,92,94,96}};
    score(a);
    return 0;
}