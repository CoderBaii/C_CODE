#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

int main(){  //替换  字符由两边向中间移动
    char arr1[] = "Welcome to my world!!!!!";
    char arr2[] = "########################";

    int left = 0;
 // int right = sizeof(arr1)/sizeof(arr1[0])-2;
    int right = strlen(arr1)-1;  //计算数组长度 不获取\n

    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);
        system("cls"); //执行系统命令的函数
        left++;
        right--;
    }
    printf("%s\n",arr2);
    
    return 0;
}