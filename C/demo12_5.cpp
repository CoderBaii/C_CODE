#include <stdio.h>

int main(){
    int a = 0;
    int b = 2;
    if(a ==1)
    {
        if(b == 2)
            printf("hehe\n");
    }
    else //此时输出的才为haha
        printf("haha\n");

    return 0;
}