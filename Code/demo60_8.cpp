#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//qsort比较结构体数组的内容

struct Stu
{
    char name[20];
    int age;
};

int compare(const void *a,const void *b)
{
    return ((struct Stu*)a)->age - ((struct Stu*)b)->age;
    return strcmp(((struct Stu*)a)->name,((struct Stu*)b)->name); //字符串首字母升序
}

int main()
{
    struct Stu s[3] = {{"Jerry",20},{"Thomas",28},{"Mike",32}};
    int sz = sizeof(s)/sizeof(s[0]);
    qsort(s,sz,sizeof(s[0]),compare);
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%s,%d\n",s[i].name,s[i].age);
    }
    return 0;
}