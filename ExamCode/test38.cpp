#include <stdio.h>
#include <stdlib.h>
//输入数字字符 将其转换成对应的数字

long fun(char *p)
{
    int flag = 1;
    long s = 0;
    //判断符号位
    if((*p) == '-')
    {
        p++;
        flag = -1;
    }
    else if((*p) == '+')
        p++;
    while(*p)
    {
        s = s*10-48+(*p++);  //48为’0‘
        //s为相邻的上次的转换结果
    }
    return s*flag; //如果为- 就乘以-falg
}

int main()
{
    char s[10];
    long n;
    system("cls");
    printf("Enter a string:\n");
    gets(s);
    n = fun(s);
    printf("%ld\n",n);
}