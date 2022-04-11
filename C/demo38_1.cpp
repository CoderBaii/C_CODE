#include <stdio.h>
#include <string.h>

int main()  //指定位置替换字符 
{
    char ch[] = "hello world";
    memset(ch,'*',5);  //memset 内存控制
    printf("%s\n",ch);

    return 0;
}