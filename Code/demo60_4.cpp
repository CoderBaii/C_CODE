#include <stdio.h>
//函数指针数组

int Add(int x,int y)
{
    return x + y;
}

int Sub(int x,int y)
{
    return x - y;
}

int Mul(int x,int y)
{
    return x * y;
}

int Div(int x,int y)
{
    return x / y;
}

int main()
{
    int* arr[5];
    int(*pa)(int,int) = Add;
    int(*parr[4])(int,int) = {Add,Sub,Mul,Div};
    int i = 0;
    for(i=0;i<4;i++)
    {
        printf("%d\n",parr[i](1040,2));
    }
    return 0;
}

char* my_strcpy(char* dest,const char* src);

//写一个函数指针pf,能够指向my_strcpy
char*(*pf(char*,const char*));

//写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
char*(*pfArr[4](char*,const char*));
