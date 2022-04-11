#include <stdio.h>

int main(){
    int x = 0;
    int count = 0;
    for(x=100;x<=200;x++)
    {
        int y = 0;
        for(y=2;y<x;y++)  //试除法 y<x相当于y最大为x-1
        {
            if(x%y == 0)  //如果x能被一个y值整除 说明x不是素数
            {
                break;  //跳出循环
            }
        }
        if(x == y)  //被本身整除即为
        {
            printf("%d ",x);
            count++;
        }
    }
    printf("\n素数个数有：%d\n",count);
    return 0;
}