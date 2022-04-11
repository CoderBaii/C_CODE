#include <stdio.h>

int get_max(int x,int y)  //比较两个数的大小
{
    if(x>y)
        return x;
    return y;
}

int main()
{
    int a = 8;
    int b = 2;
    int max = get_max(a,b);
    printf("%d\n",max);

    return 0;
}