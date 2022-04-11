#include <stdio.h>

int main(){  //输入三个数从大到小排列
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d",&a, &b ,&c);

    if(a<b)
    {
        int temp = a;   //临时变量 先把a的值放到临时变量 再把b值赋给a 
        a = b;
        b = temp;
    }
    if(a<c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if(b<c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d %d %d\n",a ,b, c);   //不管输入的数字哪个大都按照a b c输出

    return 0;
}