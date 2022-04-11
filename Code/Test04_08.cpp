#include <stdio.h>
#include <math.h>

//指针变量一般是 4或者8字节 32位平台是4
// void test1(int arr[])
// {
//     printf("%d\n",sizeof(arr)); //4
// }
// void test2(char ch[])
// {
//     printf("%d\n",sizeof(ch));  //ch此处为指针 大小为4
// }

// int main()
// {
//     int arr[10] = {0};
//     char ch[10] = {0};
//     printf("%d\n",sizeof(arr));  //40
//     printf("%d\n",sizeof(ch));  //10
//     test1(arr);
//     test2(ch);
//     return 0;
// }

// int main()
// {
//     int i = 0,a = 0,b = 2,c = 3,d = 4;
//     i = a++ && ++b && d++;  //1 2 3 4
//     //左边为假 后面的都不执行 然后a自增
//     printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
//     i = a++ || ++b || d++; //2 2 3 4
//     //左边为真 后面的都不执行 然后a自增
//     printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
//     return 0;
// }

/*整形提升
int main()
{
    char a = 3;
    //00000000000000000000000000000011
    //00000011  截断

    char b = 127;
    //00000000000000000000000001111111
    //01111111  截断

    //a和b如何相加
    //00000000000000000000000000000011
    //00000000000000000000000001111111
    //00000000000000000000000010000010

    char c = a + b;
    //10000010
    //整形提升
    //11111111111111111111111110000010 补码 高位为1补1
    //11111111111111111111111110000001 反码=补码+1
    //10000000000000000000000001111110 原码=符号位不变，其他位按位取反
    //- 126

    printf("%d\n",c); 
}
*/   

/*
int main()
{
    char a = 0xb6; //0x后面为十六进制的整形
    //10110110 整形提升后在前面补1 所以下面不相等
    short b = 0xb600;
    int c = 0xb6000000;
    if(a == 0xb6)
    {
        printf("a");
    }
    if(b == 0xb600)
    {
        printf("b");
    }
    if(c == 0xb6000000)
    {
        printf("c\n");
    }
    return 0;
}
*/

// int main()
// {
//     char c = 1;
//     printf("%u\n",sizeof(c)); //1
//     printf("%u\n",sizeof(+c)); //4  整型提升 计算的是int类型的字节
//     printf("%u\n",sizeof(!c)); //1
//     return 0;
// }

// int main()
// {
//     int x = 0;
//     int y = 0;
//     printf("请输入坐标:>");
//     scanf("%d %d",&x,&y);

//     if(pow((x-3),2)+pow((y-4),2) > 25 && pow((x-3),2)+pow((y-4),2) < 49)
//         printf("坐标在圆内\n");
//     else if(pow((x-3),2)+pow((y-4),2) < 25 || pow((x-3),2)+pow((y-4),2) > 49)
//         printf("坐标在圆外\n");
//     else
//         printf("坐标在圆上面\n");

// }


// int main()
// {
//     int x = 3;
//     int y = pow((x-1),2); //二次方
//     printf("%d\n",y);
// }

/*
//指针类型决定了步长和访问权限
int main()
{
    int arr[10] = {0};
    int* p = arr; //数组名-首元素地址
    //char* p = arr; char*一次只能改变一个字节只改变了两个半字节 
    //而int型指针一次可以访问(改)四个字节
    int i = 0;
    //遍历 使数组里全为1
    for(i=0;i<10;i++)
    {
        *(p+i) = 1;
    }
}
*/

// int main() 指针加
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int* p = arr;
//     int i = 0;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<sz;i++)
//     {
//         printf("%d ",*p);
//         //p++;
//         p+=1;
//     } 
// }

// int main() 指针减
// {
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int* p = &arr[9];
//     int i = 0;
//     for(i=0;i<5;i++) 
//     {
//         printf("%d ",*p);
//         //p++;
//         p-=2;
//     } 
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = 30;
//     int* arr[3] = {&a,&b,&c}; //指针数组
//     int i = 0;
//     for(i=0;i<3;i++)
//     {
//         printf("%d ",*(arr[i]));
//     }
// }

/*
int i; //全局变量不初始化默认为0
int main()
{
    i--;
    if(i > sizeof(i)) //sizeof计算变量/类型所占内存大小时返回的都是无符号数 
    //所以sizeof计算的结果都是无符号数，若与其他值比较的时候都会先将其转换为无符号数
    //如果i为-1 无视符号位的话转换出来的数很大
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}
*/

int main()
{
    int a,b,c;
    a = 5;
    c = ++a; //c=6 a=6
    b = ++c,c++,++a,a++;  //c=8 b=7 a=8
    //赋值运算符优先级比逗号高
    b += a++ + c;   //a+c=16 b=16+7=23 a=9 c=8
    //+=优先级比+优先级低  
    printf("a = %d b = %d c = %d\n",a,b,c);
    return 0;
}

