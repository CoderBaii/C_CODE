#include <stdio.h>
//快速顺序查找法 - 查找数组a中是否存在某一关键字

int main()
{
    int a[9] = {11,23,41,27,42,64,82,59};
    int i = 0,x;
    scanf("%d",&x);
    a[8] = x;  //限定存在数据的数组长度
    while(a[i]!=x)
    {
        i++;
    }
    if(i < x)
        printf("Found!The index is:%d\n",i);
    else
        printf("Can not found!\n");
    return 0;
}