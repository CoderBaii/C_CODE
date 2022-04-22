#include <stdio.h>
#include <string.h>
//dtoh函数将十进制正整数d转换成16进制，
//并将转换后的结果以字符串的形式保存在字符数组s中

void convert(char s[])
{
    int i,j,t;
    for(i=0,j=strlen(s)-1;i<j;i++,j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
}

void dtoh(int d,char s[])
{
    int i,k;
    i = 0;
    do
    {
        k = d % 16;
        if(k<10)
            s[i]='0' + k;
        else
            s[i] = 'a' + k -10;
        i++;
        d /= 16;
    }while(d);
    s[i] = '\0';
    convert(s);
}

int main()
{
    char s[100];
    int num;
    printf("请输入你想转换的数字:>\n");
    scanf("%d",&num);
    dtoh(num,s);
    printf("%d转16进制为0x%s\n",num,s);
    return 0;
}