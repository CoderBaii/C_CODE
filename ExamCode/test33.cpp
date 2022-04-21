#include <stdio.h>
#include <string.h>
#include <assert.h>
//字符串左旋 --> 暴力求解法
//例如ABCD左旋一个字符得到BCDA 左旋两个得到CDAB

void left_move(char *arr,int a)
{
    assert(arr);
    int i = 0;
    int len = strlen(arr);
    for(i=0;i<a;i++)
    {
        char tmp = *arr;
        int j = 0;
        for(j = 0;j < len-1; j++)  //防止越界 
        {
            //如果len为5减1为4 arr+j+1刚好等于5又不会越界
            *(arr+j) = *(arr+j+1); //把后一个元素前移
        }
        *(arr + len - 1) = tmp;  //把拿出来的元素放到后面
    }
}

int main()
{
    char arr[] = "abcdef";
    left_move(arr,2);
    printf("%s\n",arr);
    return 0;
}