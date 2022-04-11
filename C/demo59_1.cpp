#include <stdio.h>
//模拟库函数实现字符串复制功能

void my_strcpy(char* dest,char* src)
{
    while(*src != '\0')
    {
        *dest = *src; //指针解引用就为首元素
        src++;
        dest++;
    }
    *dest = *src;
}

int main()
{
    char arr1[] = {"#############"};
    char arr2[] = "bit";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}