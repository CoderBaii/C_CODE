#define _CRT_SECURE_NO_WARNINGS	1

/*
#include <stdio.h>

int main()
{
    int i, j, n = 3;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("%c", 32);
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if ((i + j) % 2 == 0)
                printf("%d", i);
            else
                printf("%d", j);
        }
        printf("\n");
    }
}
*/

/*
int main()
{
	unsigned char a = 0x5b, b = 0xf0;  //a=91 b=240
	printf("%x\n", (a & b) >> 4);

	//91 //240

	//0101 1011
	//1111 0000
	//1010 1011 按位与的结果
	//右移四位  1010 结果为5

}
*/

/*
#include <stdio.h>

int main()
{
    int i;
    for (i = 3; i < 10; i++)
    {
        if (i * i / 20 > 1)
            break;
        printf("%d ", i);
    }
    printf("\n");
}


int main()
{
	double x = 1.2, y;
	y = x * x;
	printf("%6.2f", y);
}
*/

/*
#include <stdio.h>
#include <string.h>

char* find_str(char* a, char* b)
{
    int i = 0;
    int len = strlen(b);
    for (i = 0; i<= strlen(a) - len; i++)
    {
        int j = 0;
        for (j = 0; j < len; j++)
        {
            if (a[j+ i] != b[j]) //
                break;
            if (j == len)
                return (a + i);
        }
        return NULL;
    }
}

int main()
{
    char* a = "dos6.22 windows98 office2000", * b = "windows", * c;
    c = find_str(a, b);
    if (c!= NULL)
        printf("%s\n", c);
    else
        printf("未找到字符串%s\n", b);
}
*/

/*
#include <stdio.h>
#define N 100

计算2的100次方
假设计算结果有n位，a[0]保存个位，a[1]保存十位..a[n-1]保存最高位

int main()
{
    int i, j = 0;
    int n = 1;
    int a[N] = { 0 }; //存储计算结果
    a[0] = 1;
    //N次循环
    for (i = 1; i <= N; i++)
    {
        //每次循环将上次存储的a[0]~a[n-1]位的数字乘2
        for (j = n - 1; j >= 0; j--)
        {
            a[j] *= 2; //计算次方
        }
        //检查乘2以后的数值是否需要向相邻高位借位
        for (j = 0; j < n; j++)
        {
            a[j + 1] += a[j] / 10; //进位
            a[j] %= 10;  //原位置上的应该%10 取余
        }
        //检查进位后原来数据位a[n-1]的相邻高位a[n]是否有值，若有则数据位增1
        if (a[n])
            n++;
    }
    for (i = n - 1; i >= 0; i--)
        printf("%d", a[i]);
    printf("\n");
}
*/

/*
#include <stdio.h>

void sort(int a[], int n)
{
    int i, j = 0;
    int tmp = 0;
    for (i = 0; i < n; i++)
    {
        //for (j = i + 1; j <= n + 1; j++)
        for (j = i; j <n; j++)
        {
            if (a[i] > a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }

        }
    }
}

int main()
{
    int i = 0;
    int b[10] = { 4,15,13,9,7,6,8,1 ,10,88};
    sort(b, 10);
    for (i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
*/

/*
int Add(int x, int y)
{
    return x + y;
}

int main()
{
    //指针数组 - 每个元素的类型是指针
    int* arr[10];
    //数组指针 - *pa是指针，指向的数组是10个元素，每个元素的类型是int*
    int* (*pa)[10] = &arr;
    //函数指针 - *paAdd存放函数的地址，后面是函数的参数类型
    int (*paAdd)(int, int) = Add;
    //函数指针数组 - pArr与[]先结合
    int (*pArr[4])(int, int);
    //指向函数指针数组的指针 - *ppArr是指针，指向5个元素的数组，指向的数组每个元素类型是int(*)(int,int),也就是指针
    int (*(*ppArr)[4])(int, int) = &pArr;
}
*/