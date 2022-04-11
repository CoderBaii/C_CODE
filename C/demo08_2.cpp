#include <stdio.h>
#include <string.h>
//strlen详解

int main(){
    // char arr[] = "hello";
    char arr1[] = "abc";
    char arr2[] = {'a','b','c','\0'}; //字符串结束标志是\0

    int len = strlen("abc"); //\0仅作为结束标志，不计入长度
    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2));

    printf("%s\n",arr1);
    printf("%s\n",arr2);

    printf("%d\n",strlen("C:\tp\328\tp.cpp")); //转义字符算一个长度
    return 0;
} 