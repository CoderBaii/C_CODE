#include <stdio.h>

int main()  //输出99乘法表
{
    int i = 0;
    for(i=1;i<=9;i++) //确定行数
    {
        int j = 1;
        for(j=1;j<=i;j++) //由i控制j j<=i
        {
            //printf("%d*%d=%d ",i, j ,i*j);
            printf("%d*%d=%-2d ",i, j ,j*i); //2d为右对齐 积为个位数的右移
            //同理 左对齐为-2d
        }
        printf("\n");
    }
    return 0;
}