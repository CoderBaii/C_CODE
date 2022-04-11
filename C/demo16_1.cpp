#include <stdio.h>

int main(){
    int ch = 0;
    while((ch = getchar()) != EOF) //ctrl + z结束程序  end of file 文件结束标志 值为-1
        putchar(ch);
        printf("%c",ch);
    return 0;
}