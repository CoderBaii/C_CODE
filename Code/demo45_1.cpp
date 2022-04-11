#include <stdio.h>
//递归函数 按顺序一个一个输出输入的数字
void print(int n) 
{
    if(n>9) //说明n至少是两位以上的数
    {
        print(n/10); //取商
    }
    printf("%d ",n%10);  //取余数
}

int main()
{
    unsigned int num = 0;
    scanf("%d",&num);
    
    print(num);
    //print(123) 4
    //print(12) 3 4
    //print(1) 2 3 4  逐步打印

    return 0;
}