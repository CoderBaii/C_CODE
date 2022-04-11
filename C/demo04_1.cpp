#include<stdio.h>

int main() {
    //std::cout << 0xf1;
    int a, b, c; //定义3个整型变量
    int max(int, int);  //函数声明
    printf("请输入第一个整数:");  //显示提示信息
    scanf("%d %d", &a,&b); //键盘输入一个整数赋值给a b
    c = max(a, b); //调用函数求a和b最大值赋给c
    printf("%d和%d中较大值是:%d\n", a, b, c);  //输出最大值
}
int max(int x,int y){  //求最大值的函数
    int z;  //定义临时变量z
    if(x>y)
        z = x;
    else            //x>y时z的值等于x
        z = y;      //X<y时z的值等于y
    return z;
}