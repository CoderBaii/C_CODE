#include <stdio.h>
#include <assert.h>
//模拟实现strcat

int my_strlen(char *str)
{
    int n = 0;
    while (*str != '\0')
    {
        n++;
        str++;
    }
    return n;
}

char* my_strcat(char *s1, char *s2)
{
    int i,n,len;
    char * ret = s1;
    assert(*s1 != NULL && *s2 != NULL);
    len = my_strlen(s2);
    while(*s1)
    {
        ++s1;
    }
    if(len > 5)
    {
        n = 0;
        while(n != 5)
        {
            *s1++ = *s2++;
            n++;
        }
    }
    else if(len <= 5)
    {
        while(*s1++ = *s2++)
        {
            ;
        }
    }
    return ret;
}

int main()
{
    char a[50],b[30];
    printf("请输入两个字符串：\n");
    gets(a);
    gets(b);
    my_strcat(a,b);
    printf("%s\n",a);
    return 0;
}