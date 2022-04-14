#include <stdio.h>
//数组指针的定义

int main()
{
    char* arr[5];
    char* (*pa)[5] = &arr;
    char* -- pa指向的数组元素类型是char*
    *pa -- 指针变量的名字
    [5] -- pa指向的数组是5个元素的
    *pa的* -- 说明pa是指针

    int arr2[10] = {0};
    int (*pa2)[10] = &arr;
}

//数组指针的使用  不会这么用
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int(*pa)[10] = &arr;
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("%d ",*(*pa)+i);  //printf("%d ",*(*pa+i));
        //找到指向arr的数组解引用然后打印再跳到下一个元素(i)
        printf("%d ",(*pa)[i]);
        //pa相当于数组名 *解引用拿到整个数组 然后[i]拿到元素
    }
    return 0;
}

//这种方法一样可以解决 上面使用数组指针反而更加麻烦
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* p = arr;
    int i = 0;
    for(i=0;i<10;i++)
    {
        printf("%d ",*(p+i)); //p==arr
        printf("%d ",*(arr+i));

        //#
        //另一种写法 
        printf("%d ",arr[i]);  
        //arr[i] == *(arr+i) ==*(p+i) ==p[i] 找下标i的元素
    }
}


//一般情况下数组指针都用于二维数组或以上
void print1(int arr[3][5],int x,int y)
{
    int i = 0;
    for(i=0;i<x;i++)
    {
        int j = 0;
        for(j=0;j<y;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
//参数是指针形式 
void print2(int (*p)[5],int x,int y)
{
    int i = 0;
    for(i=0;i<x;i++)
    {
        int j = 0;
        for(j=0;j<y;j++)
        {
            printf("%d ",*(*(p+i)+j)); 
            //p指向一行 加i跳过i行
            //*(p+i)找到跳到的这一行 相当于拿到了这行的数组名 然后再找到每一个元素j
            //然后将*(p+i)+j 解引用 
            //*(*(p+i)+j) i行j列

            printf("%d ",(*(p+i))[j]); //#
            //解引用p(第一行)+i的这一行
            //再拿到这一行的每个元素
            
            printf("%d ",(*(p[i]+j); == printf("%d ",p[i][j]); //+i +j其实就是[i][j]

        }
        printf("\n");
    }
}

int main()
{
    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    print1(arr,3,5); //传数组 行列
    print2(arr,3,5);
    //二维数组的首元素是二维数组的第一行 所以这里传的arr相当于第一行的地址
    return 0;
}

//int (*parr1)[10]     parr1是一个数组指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int
//int (*parr2[10])[5]  parr2是一个数组，它有10个元素，每一个元素是一个数组指针，每一个指针指向有5个元素的数组

//函数参数是二级指针可以接收的参数
void test(int **p)
{}

int main()
{
    int *ptr;
    int** pp = &prt;
    test(&ptr);
    test(pp);
    int* arr[10];
    test(arr); //指针数组
    return 0;
}