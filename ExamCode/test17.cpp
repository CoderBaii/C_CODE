#include <stdio.h>
//操作字符串

void fun(char *s1,char *s2)
{
    char *pa = s1, *pb;
    while(*s1)
    {
        pb = s2;
        //如果s1 == s2 while和if都不执行 跳到s1++
        while(*pb && (*s1 != *pb))  //s2不为0且s1!=s2
        {
            pb++;  //s2++
        }
        if(*pb =='\0') //如果s2遍历完了
            *pa++ = *s1;  //把s1赋给pa指向的值再++
        s1++;
    }
    *pa='\0';
}

int main()
{
    char s1[300] = "abcaa63akdfk",s2[300]="ayk5";
    fun(s1,s2);
    printf("%s\n", s1);
    return 0;
}