#include <stdio.h>

int main()
{
    int num = 3;
    int i = 0;
    int count = 0;

    while(num)
    {
        count++;
        num = num&(num-1);  //num为3 把3和2按位与 得到2 再把2和1按位与得到0
        //num=0 程序结束
    }
    printf("二进制中1的个数为%d个\n",count);

    return 0;
}