#include <stdio.h>

int sum(int a)
{
    int c = 0;
    static int b = 3;  //a c循环后被重置  b被修饰不变 每次加2
    c += 1;
    b += 2;
    return(a + b + c);
}

int main(){
    int i = 0;
    int a = 2;
    for(i = 0 ; i < 5; i++)
    {
        printf("%d ",sum(a)); //调用上面的函数
    }
}