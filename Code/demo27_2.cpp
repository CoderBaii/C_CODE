#include <stdio.h>
#include <math.h>  //sqrt是数学库函数  求的是一个数的开平方

int main(){
    int x = 0;
    int count = 0;
    for(x=100;x<=200;x++)
    {
        int y = 0;
        for(y=2;y<sqrt(x);y++)  //如果y小于这个数的开平方就说明它不能被1和本身以外的数整除
        {
            if(x%y == 0) 
            {
                break;  
            }
        }
        if(y > sqrt(x))  
        {
            printf("%d ",x);
            count++;
        }
    }
    printf("\n素数个数有：%d\n",count);
    return 0;
}