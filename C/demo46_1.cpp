#include <stdio.h>
#include <string.h>

int my_strlen(char* str)  //求字符串长度
{
    int count = 0;
    //循环  但使用了临时变量count
    while(*str != '\0')  //*str代表数组中的值 
    {
        count++;
        str++;  //str代表地址
    }
    return count;
}

int main()
{
    char arr[] = "hello";
  //int len = strlen(arr);

    int len = my_strlen(arr);
    printf("len = %d\n",len);

    return 0;
}