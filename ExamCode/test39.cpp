#include <stdio.h>
//输入10个自然数，将其中的素数加起来并把和输出

int ispirme(int a)
{
    int i = 2;
    for(;i<=a/2;i++)
    {
        if(a % i == 0)
            return (0); 
    }
    return (1);
}

int main()
{
    int i;
    int a[10];
    int *p=a;
    int sum = 0;
    printf("请输入10个自然数:>\n");
    for(i=1;i<10;i++)
    {
        scanf("%d ",&a[i]);
    }
    //
    for(i=1;i<=10;i++)
    {
        if(ispirme(*(p+i)) == 1) //函数参数为整形
        {
            printf("%d",*(a+i));
            sum += *(a+i);
            printf("和为%d\n",sum);
        }
        
    }
    return 0;
}