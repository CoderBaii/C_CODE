#include <stdio.h>

int main(int argc,char *argv[])  //找出数组中10个数的最大值
//int型的argc，为整型，用来统计程序运行时发送给main函数的命令行参数的个数，在VS中默认值为1。
//char*型的argv[]，为字符串数组，用来存放指向的字符串参数的指针数组，每一个元素指向一个参数。
{
    int arr[10];
    int i = 0;
    int max = 0;  //未解决数组全为负数的情况
    int sz = sizeof(arr)/sizeof(arr[0]);  //获取数组长度
    for(i=0;i<sz;i++)  //让i遍历数组里所有的数字 i为下标 初始值为0
    {
        scanf("%d",arr+i);
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d\n",max);
    
    return 0;
}