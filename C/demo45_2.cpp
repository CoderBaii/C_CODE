#include <stdio.h>
//使用递归算出输入数字的总和

int DigitSum(unsigned int n)
{
    if(n>9)
        return n%10 + DigitSum(n/10);
    else 
        return n;
}

int main()
{
    unsigned int n = 0;
    scanf("%d",&n);
    int ret = DigitSum(n);
    printf("%d\n",ret);
    return 0;
}