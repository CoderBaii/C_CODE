#include <stdio.h>
#include <string.h>
//数组名是首元素地址
//1.sizeof(数组名) - 表示整个数组
//2.&数组名 - 表示整个数组
//除此之外使用的数组名都表示首元素地址

int main()
{
    //一维数组
    int a[] = {1,2,3,4};
    printf("%d\n",sizeof(a));  //计算数组总大小 16
    printf("%d\n",sizeof(a + 0));  //首元素地址+0 4
    printf("%d\n",sizeof(*a));  //*a首元素地址 4
    printf("%d\n",sizeof(a + 1));  //第二个元素地址 4/8 平台差异
    printf("%d\n",sizeof(a[1]));  //4
    printf("%d\n",sizeof(&a));  //取出的是数组的地址，地址的大小就是4个字节，4/8
    printf("%d\n",sizeof(*&a));  //取出的是数组的地址,再解引用是整个数组的大小  16
    printf("%d\n",sizeof(&a + 1));  //地址+1跳过数组但还是地址，依旧是4个字节  4/8
    printf("%d\n",sizeof(&a[0]));  //4/8
    printf("%d\n",sizeof(&a[0] + 1));  //4/8 第二个元素的地址


    //字符数组
    char arr[] = {'a','b','c','d','e','f'};
    printf("%d\n",sizeof(arr));  //数组大小 6
    printf("%d\n",sizeof(arr + 0));  //首元素地址 4/8
    printf("%d\n",sizeof(*arr));  //*arr是首元素 字符大小为 1
    printf("%d\n",sizeof(arr[1])); //1
    printf("%d\n",sizeof(&arr));  //地址 4/8
    printf("%d\n",sizeof(&arr + 1)); //依然是地址  4/8
    printf("%d\n",sizeof(&arr[0] + 1));  //第二个元素地址 4/8

    //strlen
    printf("%d\n",strlen(arr)); //随机值
    printf("%d\n",strlen(arr + 0)); //与上面完全相同 随机值
    printf("%d\n",strlen(*arr));  //'a'是97 非法访问 错误代码
    printf("%d\n",strlen(arr[1]));  //98 err! 
    printf("%d\n",strlen(&arr));  //随机
    printf("%d\n",strlen(&arr + 1));  //随机值-6
    printf("%d\n",strlen(&arr[0] + 1));  //随机值-1

    //字符串数组
    char arr[] = "abcdef";
    printf("%d\n",sizeof(arr));     //加上'\0' 7
    printf("%d\n",sizeof(arr + 0));  //首元素地址大小 4/8
    printf("%d\n",sizeof(*arr));    //首元素大小 1
    printf("%d\n",sizeof(arr[1]));   //第二个元素大小 1
    printf("%d\n",sizeof(&arr));     //地址 4/8
    printf("%d\n",sizeof(&arr + 1));   //跳过整个数组地址，还是地址  4/8
    printf("%d\n",sizeof(&arr[0] + 1));  //第二个元素的地址 4/8

    printf("%d\n",strlen(arr));  //不计入'\0'  6
    printf("%d\n",strlen(arr + 0));  //首元素+0 6
    printf("%d\n",strlen(*arr));  //随机值 err  0x61 = 6*16^1+1*16^0 = 97
    printf("%d\n",strlen(arr[1]));  //随机值 err
    printf("%d\n",strlen(&arr));  //数组指针 -char(*p)[7] = &arr  6
    printf("%d\n",strlen(&arr + 1));  //随机值
    printf("%d\n",strlen(&arr[0] + 1));  //从第二个往后数 5

    //指针 - a(首)字符的地址放到p
    char *p = "abcdef";
    printf("%d\n",sizeof(p));  //4/8
    printf("%d\n",sizeof(p + 1));  //字符b的地址 4/8
    printf("%d\n",sizeof(*p));  //*p字符串的第一个字符 1
    printf("%d\n",sizeof(p[0]));  //p[0] == *(p+0) == 'a' 1
    printf("%d\n",sizeof(&p));  //4/8
    printf("%d\n",sizeof(&p + 1));  //4/8
    printf("%d\n",sizeof(&p[0] + 1));  //b的地址 4/8

    printf("%d\n",strlen(p));  //6
    printf("%d\n",strlen(p + 1));  //第二个元素的地址 5
    printf("%d\n",strlen(*p));   //err!
    printf("%d\n",strlen(p[0]));  //err!
    printf("%d\n",strlen(&p));   //随机值 它是在p后寻找'\0',而不是数组
    printf("%d\n",strlen(&p + 1));  //随机值
    printf("%d\n",strlen(&p[0] + 1)); //5

    //二维数组
    int a[3][4] = {0};
    printf("%d\n",sizeof(a));   //3x4x4=48
    printf("%d\n",sizeof(a[0][0]));  //第一行第一个元素 4
    printf("%d\n",sizeof(a[0]));  //二维数组首元素是第一行所有元素 16
    printf("%d\n",sizeof(a[0] + 1));  //第一行第二个元素地址 4
    printf("%d\n",sizeof(&a[0] + 1));  //第二行地址 4 
    printf("%d\n",sizeof(*(a[0] + 1)));  //第一行第二个元素地址解引用 4
    printf("%d\n",sizeof(*(&a[0] + 1)));  //第二行解引用 16
    printf("%d\n",sizeof(a + 1));  //a是二维数组数组名，没有sizeof(数组名)，也没有&(数组名)，所以a是首元素地址，a+1是第二行数组的地址 4
    printf("%d\n",sizeof(*(a+1)));  //等价于a[1] 16
    printf("%d\n",sizeof(*a));  //首元素(第一行)地址 16
    printf("%d\n",sizeof(a[3]));  //a[3]不参与运算(等同于a[0])，sizeof根据类型计算大小 还是 16

    return 0;
}
