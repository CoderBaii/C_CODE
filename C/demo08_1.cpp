#include <stdio.h>
//sizeof详解

int main(){
    //基本变量定义方法
    int a = 10;  //4字节
    char b = 'b'; // char占据的内存大小是1 个byte
    short c =2;  // short占据的内存大小是2 个byte
    long d = 9;  // long占据的内存大小是4 个byte
    float e = 6.29f;  // float占据的内存大小是4 个byte
    double f = 95.0629;  // double占据的内存大小是8 个byte
    int arr[] = {1,2,3};
    char str[] = "hello"; //隐藏结束符，字符串为n+1个字节
    double *p=&f;
    int *i=&a;
    //分别对各个变量使用sizeof运算
    printf("a=%d, b=%d, c=%d, e=%d, f=%d, arr=%d, str=%d point_p=%d, point_i=%d\n",
    sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f),
    sizeof(arr),sizeof(str),sizeof(p),sizeof(i)); //sizeof计算数据所占空间

    return 0;
}