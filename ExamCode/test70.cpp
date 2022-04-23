#include <stdio.h>
//把数组a所以的后项除以前项之商取整后存入数组b,并按每行3个元素输出

int main()
{
    int a[10]= {2,4,8,16,32,64,128,256,512,1024},b[10];
    int i = 0,j;
    for(i=1;i<10;i++)
    {
        b[i] = a[i]/a[i-1];
    }
    for(i=1;i<10;i++)
    {
        printf("%3d ",b[i]);
        if(i%3==0) 
            printf("\n");
    }
    return 0;
}