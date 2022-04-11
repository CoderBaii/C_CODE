#include <stdio.h>

int main(){  //辗转相除法  求三个数的最大公约数
    int a = 0;
    int b = 0;
    int r = 0;
    scanf("%d %d", &a, &b);

    while(r=a%b)
    {
      //r = a%b;
        b = r;
        a = b;
    }
    printf("%d ",b);

    return 0;
}

//辗转相除法：以除数和余数反复做除法运算，当余数为 0 时，取当前算式除数为最大公约数