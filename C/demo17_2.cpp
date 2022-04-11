#include <stdio.h>

int main(){  //仅输出0~9字符的范围
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
        if(ch < '0' || ch > '9')
            continue;
        putchar(ch);
    }
    return 0;
}
