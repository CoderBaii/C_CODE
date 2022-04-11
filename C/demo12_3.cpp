#include <stdio.h>

int main(){  //if else
    int input_age = 0;

    scanf("%d",&input_age);

    if(input_age < 18)
    {
        printf("未成年\n");  //如果if和else掌管多条输出语句，就加上大括号，组成代码块
        printf("不能谈恋爱\n");
    }
    else
    {
    if (input_age >= 18 && input_age < 28)
        printf("青年\n");
    else if(input_age >= 28 && input_age < 50)
        printf("壮年\n");
    else if(input_age >= 50 &&input_age < 90)
        printf("老年\n");
    else
        printf("老不死\n");
    }
    

    return 0;
}