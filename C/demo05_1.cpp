#include <stdio.h>
#define PI 3.14159  //定义符号常量PI

//半径是R的球的表面积计算公式是：S=4πR^2（4倍的π乘以R的二次方）
//半径是R的球的体积公式是V=4/3 πR^3

int main(){
    int r;
    float v, f;  //定义v,f为单精度浮点数
    r = 2;
    v = 4.0 * PI * r * r * r / 3.0;  //体积
    f = 4.0 * PI * r * r;   //表面积
    printf("体积为:%f,表面积为:%f\n", v, f);
}