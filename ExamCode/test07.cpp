#include <stdio.h>
//输入字符串 如为大写则转为小写 如为小写反之

int main()
{
    char s[80];
    int i;
    printf("请输入一个字符串:>");
    for(i=0;((s[i] = getchar()) != '\n') && (i < 80);i++);
    for(i=0;s[i] != '\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i] -= 32;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            s[i] += 32;
        }
        printf("%c",s[i]);
    } 
}