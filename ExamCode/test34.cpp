#include <stdio.h>
#include <string.h>
#include <assert.h>
//字符串左旋 --> 三步翻转法
//例如ABCD左旋一个字符得到BCDA 左旋两个得到CDAB

void reverse(char *left,char *right)
{
    assert(left);
    assert(right);
    // while(left < right)
    // {
    //     char tmp = *left;
    //     *left = *right;
    //     *right = tmp;
    //     left++;
    //     right--;
    // }
    char* i;
    for(i=left;i<right;i++)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void left_move(char *arr,int a)
{
    assert(arr);
    int len = strlen(arr);
    reverse(arr,arr+a-1); //逆序左边
    reverse(arr+a,arr+len-1); //逆序右边
    reverse(arr,arr+len-1); //逆序整体
}

int main()
{
    char arr[] = "abcdef";
    left_move(arr,3);
    printf("%s\n",arr);
    return 0;
}