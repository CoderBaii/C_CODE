#include <stdio.h>
//汉诺塔

void Move(char pos1,char pos2)
{
    printf(" %c->%c ",pos1,pos2);
}

/*
N:代表盘子的个数
pos1:起始位置
pos2:中转位置
pos3:目的位置
*/

void Hanoi(int n,char pos1,char pos2,char pos3)
{
    if(n == 1)
    {
        Move(pos1,pos3);
    }
    else
    {
        Hanoi(n-1,pos1,pos3,pos2);  //把n-1个盘子通过中转位置移动到目的位置
        Move(pos1,pos3);
        Hanoi(n-1,pos2,pos1,pos3);
    }
}

int main()
{
    Hanoi(3,'A','B','C');
}