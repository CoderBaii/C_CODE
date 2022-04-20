#define _CRT_SECURE_NO_WARNINGS	1
/*
#include <stdio.h>
#include <stdlib.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1, const void* e2)
{
	//比较整形数据
	return *(int*)e1 - *(int*)e2;
}

int cmp_stu(const void* s1, const void* s2)
{
	//比较结构体
	//return ((struct Stu*)s1)->age - ((struct Stu*)s2)->age;  比较年龄
	return strcmp(((struct Stu*)s1)->name, ((struct Stu*)s2)->name); 
}

void Swap(char *s1,char *s2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
		s1++;
		s2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* a, const void* b))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)  //j=0是前一个base为第一个元素的地址 后面j+1就是第一个
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void test2()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu);
	for (int j = 0; j < sz; j++)
	{
		printf("%s,%d\n", s[j].name, s[j].age);
	}
}

int main()
{
	test1();
	test2();
}
*/

#include <stdio.h>

/*
struct Test
{
    int Num;
    char* pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}*p;


int main()
{
    p = (struct Test*)0x100000;
    printf("%p\n", p + 0x1); //跳过结构体大小所以为1000021
    printf("%p\n", (unsigned long)p + 0x1);   //100001
    printf("%p\n", (unsigned int*)p + 0x1);   //100004
    return 0;
}
*/

/*
int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);  //
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}
*/

/* 菱形
#include <stdio.h>
int main()
{
	int i,  rows, space,k = 0;
	printf("请输入行数:>");
	scanf("%d", &rows);
	for (i = 1; i <= rows; ++i, k = 0)
	{
		for (space = 1; space <= rows - i; ++space)
		{
			printf("  ");
		}
		while (k != 2 * i - 1)
		{
			printf("* ");
			++k;
		}
		printf("\n");
	}

	for (i = 1; i <= rows-1; ++i, k = 0)
	{
		for (space = 1; space <= i; ++space)
		{
			printf("  ");
		}
		while (k != 2 *(rows - i )- 1)
		{
			printf("* ");
			++k;
		}
		printf("\n");
	}

	return 0;
}
*/

/*err
int main()
{
	int x = -1;
	int y = 0;
	if (x >= 0)
		if (x)
			y = 1;
		else
			y = -1;
	printf("%d", y);
	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 10 - 2 * i; j++ )
		{
			printf("  ");
		}
		for (j = 1; j <= 2* i -1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
*/

/*  err!!!
#include <stdio.h>
#include <math.h>

int prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0);
		{
			break;//不是素数
		}
	}
	if (i > sqrt(n))
	{
		return n;
	}
	else
	{
		return n;
	}
}
int main()
{
	int i;
	do
	{
		printf("请输入一个数(0~99):\n");
		scanf("%d", &i);
	} while (i < 0 || i>99);

	prime(i);
	if (prime(i))
		printf("%d是素数", i);
	else
		printf("%d不是素数", i);
	return 0;
}
*/
#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("\x41");
//}

/*
int main()
{
	int i, j, x = 0;
	for (i = 0; i < 2; i++)
	{
		x++;
		for (j = 0; j <= 3; j++)
		{
			if (j % 2)
				continue;
			x++;
		}
		x++;
	}
	printf("%d\n", x);
}
*/

#include <stdio.h>

//int main()
//{
//	int y = 10;
//	while (y--)
//		printf("y=%d\n", y);
//}


/*
double fun(int n, int x)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return x;
	}
	else
	{
		return (2 * n - 1) * x * fun(n - 1, x) - (n - 1) * fun((n - 2), x) / n;
	}
}
int main()
{
	int n, x;
	printf("please input n&x:\n");
	scanf("%d%d", &n, &x);
	fun(n, x);
	printf("%lf ", fun(n, x));
	return 0;
}
*/

/*
void print(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void move(int a[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && (a[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (a[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = a[left];
			a[left] = a[right];
			a[right] = tmp;
		}
	}
}


//交换数组奇偶数位置
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}
*/