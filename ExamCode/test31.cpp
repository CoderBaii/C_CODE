#include <stdio.h>

/*
以下为4个嫌犯的供词：
A：不是我。
B：是C。
C：是D。
D：C在胡说。
已知3个人说了真话，1个人说的是假话，请根据信息编写一个程序找出凶手。
*/

int main()
{
    int killer = 0;
    for(killer == 'a' ; killer <= 'd'; killer++)
    {
        if((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
        {
            printf("凶手是%c\n",killer);
        }
    }
    
    return 0;
}