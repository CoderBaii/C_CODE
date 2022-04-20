#include <stdio.h>
#include <math.h>
#include <string.h>
//排序字符串

void fun2(char a[],char b[],char c[])
{
    char str[15];
    if(strcmp(a,b) > 0)  //strcmp - 字符串比较
    {
        strcpy(str,a);  //strcpy 字符串拷贝函数，a是要拷贝的，str是目的地
        strcpy(a,b);
        strcpy(b,str);
    }
    if(strcmp(a,c) > 0)
    {
        strcpy(str,a);
        strcpy(a,c);
        strcpy(c,str);
    }
    if(strcmp(b,c) > 0)
    {
        strcpy(str,b);
        strcpy(b,c);
        strcpy(c,str);
    }
}

int main()
{
    char str1[15] = "Fuzhou", str2[15] = "Fujian", str3[15] = "China";
    fun2(str1,str2,str3);
    printf("%s,%s,%s\n",str1,str2,str3);
}