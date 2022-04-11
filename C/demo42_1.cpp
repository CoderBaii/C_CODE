#include <stdio.h>

int is_leap_year(int y)
{
     if((y%4==0)&&(y%100!=0)||(y%400==0))
        return 1;
    return 0;
}

int main()
{
    int year = 0;
    for(year=1000;year<=2000;year++)
    {
        //判断year是否为闰年
        if(is_leap_year(year) == 1)
            printf("%d ",year);
    }
    return 0;
}