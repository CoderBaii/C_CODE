#include <stdio.h>
//使用指针 求字符串长度
int my_strlen(char* str)
{
    char* start = str;
    char* end = str;
    while(*end != '\0')
    {
        end++;
    }
    return end - start;

}

int main()
{
    char arr[] = "hey";
    int len = my_strlen(arr);
    printf("len = %d\n",len);

    return 0;
}