#include <stdio.h>
#include <assert.h>
//进阶版4.0

char* my_strcpy(char* dest,char* src)  //函数返回值为char*
{
    char* ret = dest;
    assert(dest != NULL); //断言 如果条件为假程序报错
    assert(src != NULL);
    while(*dest++ = *src++)
    {
        ;
    }
    return ret;
}

int main()
{
    char arr1[] = {"#############"};
    char arr2[] = "bit";
    printf("%s\n",my_strcpy(arr1,arr2));  //链式访问 可以直接将一个函数的返回值作为另一个函数的参数
    return 0;
}