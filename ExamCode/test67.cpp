#include <stdio.h>
#include <string.h>
#include <assert.h>
//从键盘输入一个字符串a,并在串中的最大元素后边插入另外的字符串b

void insert(char *a,char *b)
{
    assert(*a != 0);
    char max = a[0];
    int i = 1,j;
    while(a[i])
    {
        if(a[i]> max)
        {
            max = a[i];
            j = i;
        }
        i++;
    }
    for(i=strlen(a)+strlen(b)-1; i>j; i--)  //i等于a+b-1的长度
    {
        a[i] = a[i-strlen(b)];
    }
    j=0;
    i++;
    while(b[j])
    {
        a[i] = b[j];
        i++;
        j++;
    }
    printf("%s\n",a);
}

int main()
{
    char a[50],b[] = "ou";
    gets(a);
    insert(a,b);
    return 0;
}