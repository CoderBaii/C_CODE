#include <stdio.h>
//百鸡问题

int eggs()
{
    int rooster,hen,chicks,n = 0;  //鸡翁一值钱五、鸡母一值钱三、鸡雏三值钱一
    for(rooster = 0; rooster<=20; rooster++)
    {
        for(hen = 0; hen<=33;hen++)
        {
            chicks = (100-5*rooster-3*hen)*3;
            if(rooster+hen+chicks == 100 && rooster != 0)
            {
                n++;
                printf("rooster: %d只 hen: %d只 chicks: %d只\n",rooster,hen,chicks);
            }
        }
    }
    return n;
}

int main()
{
    int num;
    num = eggs();
    printf("一共有%d种买法\n", num);
    return 0;
}