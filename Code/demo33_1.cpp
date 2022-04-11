#include<stdio.h>           //输出三角形

int main(void)
{
    int a,b,c;            /*a为行数,从0开始  b为空格  c为初始字母*/

    for(a=0;a<=4;a++)          /*确定行数*/
    {
        c=65;          /*使每一行的第一个字母是A*/
        for(b=4-a;b>=0;b--)          /*确定空格数量*/
            printf(" ");
        for(b=1;b<=a*2+1;b++)          /*确定每一行字母数量*/
            printf("%c",c++);          /*输出结果并自增*/
        printf("\n");
    }
    return 0;
}