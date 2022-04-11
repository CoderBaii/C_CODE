#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[20] = {0};
    system("shutdown -s -t 60000");
// again:
while(1)
{
    printf("请注意，您的电脑将在一分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
    scanf("%s", input);

    if(strcmp(input, "我是猪") == 0)   //strcmp函数  比较两个字符串
    {
        system("shutdown -a");
        break;
    }
}
    // else
    // {
    //     goto again;
    // }
    return 0;
}