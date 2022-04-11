#include <stdio.h>

int main(){
    int i = 1;
    while(i <= 10)
    {
        if(i ==  5)
            continue; //死循环 i值无法改变
        printf("%d ",i);
        i++;
    }    
    return 0;
}