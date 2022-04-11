#include <stdio.h>
#include <math.h>

int main()
{
    // int i = 7;
    // printf("%d %d %d %d",i++,--i,i--,++i);  //先输出再计算 从右至左
    //6 7 8 7
    //printf("%d",++a); //先++ 后使用 输入8
    //printf("%d",a++); //后++ 先使用 输入7
 
    /*三目运算符
    int a,b,c,max;
    printf("请输入三个数字：");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("最大的数是:%d\n",max);
    */

    /*输入一个数求平方根
    int i,k;
    printf("请输入一个小于1000的整数:");
    scanf("%d",&i);
    if(i>1000)
    {
    printf("输入错误，请重新输入");
    scanf("%d",i);
    }
    k=sqrt(i);
    printf("%d的平方根是%d",i,k);
    */

    /*素
    int n = 0;
    int count = 0; 
    for(n=101;n<=200;n+=2)
    {
        int i = 0;
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i>sqrt(n))
        {
            printf("%d ",n);
            count++;
        }
        //printf("\n");
    }
    printf("\n素数有%d个 ",count);
    */
   
    /*素数
    int i,n,k,m=0;
    for(n=101;n<=200;n+=2)
    {
        k=sqrt(n);
        for(i=2;i<=k;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i>k)
        {
            printf("%d \n",n);
            m+=1;
        }
    }
    printf("%d\n",m);
    */
    /*
    int a = -10;
    int b =a >> 1;
    printf("%d",b);
    左移乘2 右移除2
    */

   /*
   int a = 10;
   char c = 'r';
   char* p = &c;
   int arr[10] = {0};
    return 0;
    //sizeof计算的变量所占内存空间的大小，单位字节
    printf("%d\n",sizeof(a)); //4
    printf("%d\n",sizeof(int)); //输出类型也是一样的结果

    printf("%d\n",sizeof(c)); //4
    printf("%d\n",sizeof(char));

    printf("%d\n",sizeof(p)); //1
    printf("%d\n",sizeof(char*));

    printf("%d\n",sizeof(arr)); //40
    printf("%d\n",sizeof(int [10])); //数组也有类型
    */
   
    /*
    int a = 11;
    a= a | (1 << 2);
    //00000000000000000000000000001011  11
    //00000000000000000000000000000100  左移两位或
    printf("%d\n",a); //结果为15

    a = a & (~(1 << 2));
    //00000000000000000000000000001111  15
    //11111111111111111111111111111011  按位与还原成11
    //00000000000000000000000000000100  用这个按位取反得到上面的数字
    printf("%d\n",a); //结果为11
    */

    return 0;
}