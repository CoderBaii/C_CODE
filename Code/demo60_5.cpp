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

void menu()
{
    printf("***************************\n");
    printf("****   1.Add   2.Sub   ****\n");
    printf("****   3.Mul   4.Div   ****\n");
    printf("*******    0.exit   *******\n");
}

//函数回调  --  把函数的地址传递给指针，在函数内部通过指针去调用函数，被调的函数就称为回调函数

void Calc(int(*pf)(int,int))  //*pf - 函数指针,接收函数地址
{
    int x,y = 0;
    printf("请输入两个操作数:>");
    scanf("%d%d",&x,&y);
    printf("%d\n",pf(x,y));  //调用函数指针指向的函数
}

int main()
{
    int input = 0;
    int x,y = 0;
    do
    {
        menu();
        printf("请做出选择:>");
        scanf("%d",&input);

        switch(input)
        {
            case 1:
                Calc(Add);
                break;
            case 2:
                Calc(Sub);
                break;
            case 3:
                Calc(Mul);
                break;
            case 4:
                Calc(Div);
                break;
            case 0:
                printf("退出!\n");
                break;
            default:
                printf("选择错误\n");
                break;
        }
    }while(input);
    return 0;
}