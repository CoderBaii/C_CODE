#include <stdio.h>
#include <assert.h>
//进阶版2.0

void my_strcpy(char* dest,char* src)
{
    //如果src为空指针 程序会报错 
    //此处加一个判断
    // if(dest != NULL && src != NULL)
    // {
    //     while(*dest++ = *src++)
    //     {
    //         ; 
    //     }
    // }

    //再次优化
    assert(dest != NULL); //断言 如果条件为假程序报错
    assert(src != NULL);
    while(*dest++ = *src++)
    {
        ; 
    }

}

int main()
{
    char arr1[] ={"############"};
    char arr2[] = "bit";
    my_strcpy(arr1,NULL);
    printf("%s\n",arr1);
    return 0;
}