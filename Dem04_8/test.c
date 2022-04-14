#define _CRT_SECURE_NO_WARNINGS	1
//#include <stdio.h>

//int main()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    char* pc = &a; //err
//    printf("%p\n", pa);
//    printf("%p\n",pc);
//
//    return 0;
//}

#include <stdio.h>

//typedef struct Stu
//{
//    char name[20];
//    short age;
//    char tle[12];
//    char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//    printf("name: %s\n", tmp.name);
//}
//
//void Print2(Stu* ps)
//{
//    printf("name: %s\n", ps->name);
//}
//
//int main()
//{
//    Stu s = { "周全","22","13501587375","男" };
//    Print1(s);  //传值 临时拷贝
//    Print2(&s);  //传址
//
//    return 0;
//}

//#include <stdio.h>
//#include <assert.h>
////进阶版2.0
//
//void my_strcpy(char* dest, char* src)
//{
//    //如果src为空指针 程序会报错 
//    //此处加一个判断
//    // if(*dest != NULL && *src != NULL)
//    // {
//    //     while(*dest++ = *src++)
//    //     {
//    //         ; 
//    //     }
//    // }
//
//    //再次优化
//    assert(*dest != NULL); //断言 如果条件为假程序报错
//    assert(*src != NULL);
//    while (*dest++ = *src++)
//    {
//        ;
//    }
//
//}
//
//int main()
//{
//    char arr1[] = { "############" };
//    char arr2[] = "bit";
//    my_strcpy(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}
//
//#include <stdio.h>
//#include <assert.h>
////进阶版3.0
//
//void my_strcpy(char* dest, const char* src) //const修饰的值不可改变
//{
//    assert(dest != NULL); //断言 如果条件为假程序报错
//    assert(src != NULL);
//    while (*dest++ = *src++)
//        //如果这里写错了 讲src放在左值的位置 程序会报错
//        //while(*src++ = *dest++)  err!!
//    {
//        ;
//    }
//}
//
//int main()
//{
//    char arr1[] = { "###########" };
//    char arr2[] = "bit";
//    my_strcpy(arr1, arr2);
//    printf("%s\n", arr1);
//    return 0;
//}


int main()
{
    const int num = 10;
    int* p = &num;
    //const放在指针变量的左边，修饰的是*p,也就是说：不能通过p来改变*P(num)值
    *p = 20;

    //int* const p = &num;
    //const放在指针变量的*右边是，修饰的指针变量p本身，p不能被改变
    // int n = 100;
    // p = &n;


    printf("%d\n", num);
}
