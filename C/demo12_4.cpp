#include <stdio.h>

int main(){ //初识循环
    int line = 0;
    while (line < 30000)
    {
        /* code */
        printf("坚持写代码%d\n",line);
        line++;
    }

    if(line == 30000){
        printf("好offer");
    }
    else{
        printf("进厂子");
    }
    
    return 0;
}