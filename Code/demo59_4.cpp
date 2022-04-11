#include <stdio.h>
#include <assert.h>
//进阶版3.0

void my_strcpy(char* dest,const char* src) //const修饰的值不可改变
{
    assert(dest != NULL); //断言 如果条件为假程序报错
    assert(src != NULL);
    while(*dest++ = *src++) 
    //如果这里写错了 讲src放在左值的位置 程序会报错
    //while(*src++ = *dest++)  err!!
    {
        ;
    }
}

int main()
{
    char arr1[] = {"###########"};
    char arr2[] = "bit";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}

//举例const
int main()
{
    const int num = 10;
    int* p = &num;
    *p = 20;
    //通常情况下 const修饰的num不可被改变 但它的地址被赋给了p 那么p就可以改变它

    const int* p = &num;
    //const放在指针变量的*左边是，修饰的*p，也就是说，不能通过p来改变*p的值
    int* p = &num;
    *p = 20;
    
    int* const p = &num;
    //const放在指针变量的*右边是，修饰的指针变量p本身，p不能被改变
    int n = 100;
    p = &n;

    
    printf("%d\n",num);
}