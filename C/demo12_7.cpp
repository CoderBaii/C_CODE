#include <stdio.h>

int main(){
    int a = 0;
    int b = 2;
    if(a == 1)
        if(b == 2)
            printf("hehe\n");
    else  //悬空else 在C语言里else通常与最近的且未匹配的if匹配
        printf("haha\n");

    return 0;
}