#include <stdio.h>

int main(){
    int number, a, b, c;
    number = 789;
    printf("输入的3位数为:%d\n", number);
    a = number / 100;   //百位
    b = (number - a * 100) / 10;  //十位
    c = number % 10;
    printf("反序数为:%d%d%d\n", c, b, a);
    return 0;
}