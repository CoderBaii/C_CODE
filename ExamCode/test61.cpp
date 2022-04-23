#include <stdio.h>
//最小公倍数

//求出三个数中的最大数
int max(int x,int y,int z)
{
    if (x>y && x>z) 
        return (x);
    else if (y>x && y>z)
        return (y);
    else
        return (z); 
}

int main()
{
    int x1,x2,x3,i=1,j,x0;
    printf("Input three numbers:");
    scanf("%d%d%d",&x1,&x2,&x3);
    x0 = max(x1,x2,x3);
    while(1)
    {
        j = x0 * i; //将最大数累乘然后试除
        if(j%x1 == 0 && j%x2 == 0 && j%x3 == 0)
            break;
        i++;
    }
    printf("最小公倍数：%d\n",j);
    return 0;
}