#include <stdio.h>

int main(){ //m n的值输出是多少
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:
        m++;  //m=3
    case 2:
        n++;  //n=2
    case 3:
        switch (n)
        {
        case 1:
            n++;  //n为2，case1不执行
        case 2:
            m++;  //m=4
            n++;  //n=3
        break;
        } //括号外并没有break 继续执行case4
    case 4:
        m++;  //m=5
        break;
    default:
        break;
    }
    printf("m = %d,n = %d\n", m, n);
    return 0;
}