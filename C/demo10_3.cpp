#include <stdio.h>
//使用指针遍历数组

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // int i = 0;
    // for(i=0;i<10;i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    int *p = arr; //p为指针，arr是数组第一个元素
    int i = 0;
    for(i=0;i<10;i++){
        printf("%d ",*p);
        p++;

    }

    return 0;
}
