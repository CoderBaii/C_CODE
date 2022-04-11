#include <stdio.h>

// extern int year;

enum Sex //枚举常量是常量，值从0开始
{ 
    MALE, //如果将MALE=3，就说改变了初始值，那么他们的值为3，4，5
    FEMALE,
    SECRET,
};

int main(){
    // printf("%d",year);

    // return 0;
    enum Sex s = MALE;
    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);

    return 0;

}