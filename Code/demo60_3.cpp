#include <stdio.h>
//函数指针

void Print(char*str)
{
    printf("%s\n",str);
}

int main()
{
    void(*p)(char*) = Print;
    (*p)("hello");
    return 0;
}

int Add(int x,int y)
{
    return x + y;
}

int main()
{
    int(*p)(int,int) = Add;
    (*p)(2,4);
    printf("%d\n",(*p)(2,4));
    //可以省略*
    printf("%d\n",(p)(2,4));
    return 0;
}

//函数指针类型

(*(void(*)()0)()); -->函数调用
//void(*)() -- 函数指针类型 括号为参数，空表无参
//用这个类型把0强制类型转换  然后*解引用找到这个函数
//0就可以表示某函数的地址


void(*signal(int,void(*)(int)))(int);
//signal是一个函数声明
//signal(int,void(*)(int)) --函数，一个参数为int整形,一个参数为函数指针类型，指向的函数参数是int
//void(*            )(int) --函数指针类型，该指针指向的函数类型参数为int,返回类型为void

//简化
typedef void(*pfun_t)(int);
pfun_t signal(int,pfun_t);
