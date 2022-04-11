#include <stdio.h>

int main(){ //初始化 判断 与 调整三合一
    int i = 0;
    for(i=1;i<=10;i++)
    {
        if(i == 5)
            continue;
        printf("%d ",i);
    }
}