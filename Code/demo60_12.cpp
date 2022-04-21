#include <stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int *ptr = (int*)(&a + 1); //a跳过整个数组 指的是5的后面
    printf("%d,%d\n",*(a + 1),*(ptr - 1));  //a+1 就是2  ptr-1 再次指向5
    return 0;
}



struct Test
{
    int Num;
    char *pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}*p;

//假设p的值为0x100000，如下表达式的值分别为多少？ (指针+1)
//已知Test字节大小是20字节
int main() 
{
    p = (struct Test*)0x100000;
    printf("%p\n",p + 0x1); //跳过结构体大小所以为0x100014  1是16，+4
    printf("%p\n",(unsigned long)p + 0x1);   //长整型 0x100001
    printf("%p\n",(unsigned int*)p + 0x1);   //0x100004
    return 0;
}



int main()
{
    int a[4] = {1,2,3,4};
    int *ptr1 = (int*)(&a + 1);  //a+1跳过数组然后强转成指针
    int *ptr2 = (int*)((int)a + 1); //a强转为整数+1 再强转为地址(移动了一个字节)
    printf("%x,%x",ptr1[-1],*ptr2);  //%x是以16进制输出整数  4，2000000
    //ptr1[-1] == *(ptr+(-1)) == *(ptr-1)
    return 0;
}



int main()
{
    //               1     3     5
    int a[3][2] = {(0,1),(2,3),(4,5)};  //逗号表达式 
    int *p;
    p = a[0]; //首元素
    printf("%d\n",p[0]);
    return 0;
}


int main()
{
    int a[5][5];
    int(*p)[4];
    p = a;  //类型不一样  int(*)[4]  -- int(*)[5]
    //&p[4][2]应该是a的[3][4] 减去a[4][2] 差值为4  所以结果是-4
    printf("%p,%d\n",&p[4][2] - &a[4][2],&p[4][2] - &a[4][2]);
    //%p打印地址
    /*
    -4
    1000 0000 0000 0000 0000 0000 0000 0100 原码
    1111 1111 1111 1111 1111 1111 1111 1011 补码 符号位不变按位取反
    1111 1111 1111 1111 1111 1111 1111 1100 反码 补码+1
     f    f    f    f     f   f    f    c --12
    0xFFFFFFFC
    */
    return 0;
}

#include <cstdio>
int main()
{
    int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr1 = (int*)(&aa + 1);   //数组指针强转整形指针，指向数组外面，减一就指向末尾
    int *ptr2 = (int*)(*(aa + 1)); //指向第二行首元素
    printf("%d,%d\n",*(ptr1 - 1),*(ptr2 - 1));
    return 0;
}

#include <stdio.h>
int main()
{
    char *a[] = {"work","at","alibaba"};  //存储的是字符串首字符 w a a
    char**pa = a;
    pa++;
    printf("%s\n",*pa);  //at
    return 0;
}

int main()
{
    char *c[] = {"ENTER","NEW","POINT","FIRST"};
    char**cp[] = (c + 3,c + 2,c + 1,c); //
    char***cpp = cp;
    printf("%s\n",**++cpp);  //
    printf("%s\n",*--*++cpp + 3);  //
    printf("%s\n",*cpp[-2] + 3);  //
    printf("%s\n",cpp[-1][-1] + 1); //
    return 0;
}