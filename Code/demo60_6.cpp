#include <stdio.h>

int Add(int x,int y)
{
    return x + y;
}

int Sub(int x,int y)
{
    return x - y;
}

int Mul(int x,int y)
{
    return x * y;
}

int Div(int x,int y)
{
    return x / y;
}

int Xor(int x,int y)
{
    return x ^ y;
}

void menu()
{
    printf("***************************\n");
    printf("****   1.Add   2.Sub   ****\n");
    printf("****   3.Mul   4.Div   ****\n");
    printf("****   5.Xor   0.exit  ****\n");
}

int main()
{
    int input;
    int x,y = 0;
    do
    {
        menu();
        printf("请做出选择:>");
        scanf("%d",&input);
        int(*pfArr[])(int,int) = {0,Add,Sub,Mul,Div,Xor};
        if(input >= 1 && input <= 5)
        {
            printf("请输入两个操作数:>");
            scanf("%d%d",&x,&y);
            printf("%d\n",pfArr[input](x,y));
        }
        else if(input == 0)
        {
            printf("退出程序！\n");
        }
        else
        {
            printf("选择错误，请重新输入:>");
        }
    }while(input);
    
    return 0;
}