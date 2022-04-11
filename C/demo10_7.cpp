#include <stdio.h>
//将字符串中的字符反向排列  不能使用C语言操作字符串的库函数

//计算字符串长度的函数
int my_strlen(char* str)
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

//实现字符串逆序的函数
void reverse_string(char arr[])
{
    int left = 0;
    int right = my_strlen(arr)-1;
    while(left<right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
    printf("%s\n",arr);
}

int main()
{
    char arr[] = "abcdefg";
    reverse_string(arr);

    return 0;
}