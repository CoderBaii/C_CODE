#include <stdio.h>
#include <math.h>
#include <string.h>

//从字符串数组str1中取得ASCLL码值为偶数
//且下标为偶数的字符依次存放到字符串t中

int main()
{
    char str1[100],t[200];
    int i,j;
    j = 0;
    strcpy(str1,"4AZ18c?Ge9a0z!");
    for(i=0;i<strlen(str1);i++)
    {
        if((str1[i]%2==0) && (i%2==0))
        {
            t[j] = str1[i];
            j++;
        }
    }
    t[j] = '\0';
    printf("\nOrginal string:%s\n",str1);
    printf("\nResult string:%s\n",t);
    return 0;
}