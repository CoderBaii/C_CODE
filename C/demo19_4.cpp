#include <stdio.h>

int main(){ //计算1到n的阶乘
   
   int i = 0;
   int n = 0;
// int ret = 1;  ret为全局变量时，for循环里的值不会被重置  
   //ret = 1*1 = 1
   //ret = 1*2 = 2 
   //ret = 2*1*2*3 = 12 阶乘的值会留在ret 就改变了最终的值
   int sum = 0;
   for(n=1;n<=3;n++)
   {
       int ret = 1;  //存储阶乘
       for(i=1;i<=n;i++)
       {
           ret*=i;  //阶乘的值
       }
       sum = sum + ret;
   }
   printf("sum = %d\n",sum);
   return 0;

}