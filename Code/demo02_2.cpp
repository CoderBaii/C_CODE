#include <stdio.h>
//计算1~100偶数和
 
int main(){
    int sum=0;
    for(int i=1;i<=100;i++){
        if(!(i%2)) sum+=i;
    }
    printf("Result=%d\n",sum);
}