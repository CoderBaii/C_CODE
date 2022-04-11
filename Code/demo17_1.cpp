#include <stdio.h>

int main(){
    int ret = 0;
    int ch = 0;
    char password[20] = {0};
    printf("%s",password);

    while((ch = getchar()) != '\n')  //循坏读取输入缓冲区，读到换行符停止
    {
        ;
    }

    printf("请确认(Y/N)：>");  
    ret = getchar();   //防止getchar读取换行符 \n的ASCLL为10 
    if(ret == 'Y')
    {
        printf("确认成功\n");
    }
    else
    {
        printf("放弃确认\n");
    }
}