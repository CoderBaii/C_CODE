#include <stdio.h>
//输出结果不大于1的数字

int main()
{
    int i;
    for(i=3;i<10;i++)
    {
        if(i*i/20>1)
            break;
        printf("%d ",i);
    }
    printf("\n");
}
