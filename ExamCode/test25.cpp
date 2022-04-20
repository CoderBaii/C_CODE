#include <stdio.h>
#include <string.h>
//字符串逆序

//指针
void funt(char *a)
{
    int i,j;
    char *p1,*p2;
    char t;
    p1 = a+(strlen(a)-1);
    p2=a;
 
    while(p1>p2)
    {
        t=*p1;
        *p1=*p2;
        *p2=t;
        p1--;
        p2++;
    }
}

int main()
{
 char a[20];
 scanf("%s",a);
 funt(a);
 printf("%s\n",a);
 return 0;
}

//数组
void reverse(char a[])
{
    int i,j;
    char tmp;
    int k = strlen(a)-1;
    for(i=k,j=0;i>j;--i,++j)
    {
        char tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }

}

int main()
{
    char arr[] = "abcdfe";
    reverse(arr);
    printf("%s\n",arr);
    return 0;
}