#include <stdio.h>
//不允许创建临时变量 求字符串长度
int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1+ my_strlen(str + 1);  //1加上后面字符的长度  str+1表示第二个字符

        //my_strlen("hey")
        //1 + my_strlen("ey")
        //1 + 1 + my_strlen("y")
        //1 + 1 + 1 + my_strlen("\0")
        //1 + 1 + 1 + 0
        //3
        
    }
    else
        return 0;
    
}

int main()
{
    char arr[] = "hey";
    int len = my_strlen(arr);
    printf("len = %d\n",len);

    return 0;
}