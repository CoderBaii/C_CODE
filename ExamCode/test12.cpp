#include <stdio.h>
#include <string.h>
//find_str用来返回字符串s2在字符串s1中第一次出现的首地址

char* find_str(char *a,char *b)
{
    int i = 0;
    int blen = strlen(b);
    for(i=0;i<=strlen(a)-blen;i++) //遍历a-b长度的数组
    {
        int j = 0;
        for(j=0;j<blen;j++) //遍历b数组 
        {
            if(a[i+j] != b[j]) //i+j - 效率提高 不需要一个一个比较
                break;
            if(j == blen)  //在a数组找到了和b长度相同的
                return (a+i); //返回该字符串在a的地址
        }
        return NULL;
    }
    return 0;
}

int main()
{
    char *a = (char*)"dos6.22 windows98 office2000";
    char *b = (char*)"windows",*c;
    c = find_str(a,b);
    if(c != NULL)
        printf("%s\n",c);
    else
        printf("未找到字符串%s\n",b);
    return 0;
}