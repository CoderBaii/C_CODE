#include <stdio.h>
#include <string.h>
//将已升序的两个字符串a和b中的字符按升序归并到字符串c中

void puts(char *c)
{
    printf("%s\n",c);
}

int main()
{
    char a[] = "acegikm";
    char b[] = "bdfhjlnpq";
    char c[80],*p;
    int i=0,j=0,k=0;
    while(a[i]!='\0' && b[j]!='\0')
    {
        if(a[i]<b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
            
        k++;
    }
    c[k] = '\0';
    if(a[i] == '\0')
        p = b+j;
    else
        p=a+i;
    strcat(c,p);
    puts(c);
    return 0;
}