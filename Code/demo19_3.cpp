#include <stdio.h>

int main(){ //计算1到n的阶乘简化
   
   int n = 0;
   int sum = 0;
   int ret = 1;  //存储阶乘
   for(n=1;n<=2;n++)
   {
       ret*=n;  //上一个阶乘的值会留在ret 再直接乘下一个

       sum = sum + ret;
   }
   printf("sum = %d\n",sum);
   return 0;

}