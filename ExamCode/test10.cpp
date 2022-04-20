#include <stdio.h>
//计算输入字符串中空格的个数

int fun(char *s) //接收字符串地址
{
    int count;
    while(*s != '\0')
    {
        if(*s == ' ')
        {
            count++;
        }
        *s++;
    }
    return count;
}

int main()
{
    char str[255];
    gets(str);
    printf("%d\n",fun(str));
}