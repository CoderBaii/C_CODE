#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    int sum = 0;
    for(i=0;i<10;i++){
        sum = sum + arr[i];
    }
    printf("%d\n",sum);

    // 求和2 
    // int sum = 0;
    // for(i=0;i<10;i++){
        // sum = sum + arr[i];
    // }

    //平均值
    int avg = sum/10;
    printf("avg = %d\n",avg);
}