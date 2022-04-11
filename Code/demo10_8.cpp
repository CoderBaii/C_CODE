#include <stdio.h>
//将字符串中的字符反向排列  不能使用C语言操作字符串的库函数
//使用递归实现

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

/*实现分为两个步骤
1.先将a和g交换
2.再把中间的bcdef逆序
3.而第二步的bcdef又可以继续拆分
*/
void reverse_string(char arr[]) //可以写成char* arr
{
    char tmp = arr[0];  //把a拿出来放在一边
    int len = my_strlen(arr); 
    arr[0] = arr[len-1]; //把最后一个字符放到首位
    arr[len-1] = '\0';  //把最后一位改成'\0'
    if(my_strlen(arr+1) >= 2)  //剩余的字符串长度大于等于2才有交换的必要
        reverse_string(arr+1); //逆序第二位到倒数第二位
    arr[len-1] = tmp; //再把a放到最后一位
    //printf("%s\n",arr);
}

int main()
{
    char arr[] = "abcdefg";
    reverse_string(arr);
    printf("逆序为%s\n",arr);

    return 0;
}