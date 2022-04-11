#include <stdio.h>

int main()
{
    //交换两个变量 不定义第三个变量
    int a = 3;
    int b = 5;
    printf("交换前：a=%d b=%d\n",a,b);

    // b = a+b;
    // a = b-a;
    // b = b-a;


    a = a^b;
    b = a^b;
    a = a^b;
    printf("交换前：a=%d b=%d\n",a,b);


    /*^ 按(二进制)位异或运算 同0非1
    a=3  b=5
    011  101
    第一次异或 a=110 b=101
    第二次异或 a=110 b=011
    第三次异或 a=101 b=011
    */
}