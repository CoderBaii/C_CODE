#include <stdio.h>
//模拟库函数实现字符串复制功能 优化版1.0

void my_strcpy(char* dest,char* src)
{
    // while(*src != '\0')
    // {
    //     *dest++ = *src++; //指针解引用就为首元素
    //     //以下两句可合并
    //     // src++;
    //     // dest++;
    // }

    //再次优化
    //把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
    while(*dest++ = *src++)
    {
        ; 
    }
}

int main()
{
    char arr1[] = {"############"};
    char arr2[] = "bit";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}