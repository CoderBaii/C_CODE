#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>

/*
union myun
	{
	struct
		{
		int x, y, z;
	} u;  int k;
} a;

int main()
{
	a.u.x = 4; a.u.y = 5; a.u.z = 6;
	a.k = 0;  //共合体一次存一个值
	printf("%d\n", a.u.x); //a.u.x=0
}
*/

/*
int main()
{
	//char* s;
	//gets(s);
	//puts(s); err!
}
*/


/*
int f(int m)
{
	static int k = 0;    int s = 0;
	for (; k <= m; k++) s++;
	return s;
}
void main()
{
	int s1, s2;
	s1 = f(5);
	s2 = f(3);
	printf("%d %d\n", s1, s2);
}
*/

/*
int * findmax(int* a, int n)
{
	int* p, * s;
	for (p = a, s = a; p - a < n;p++)
		if (*p > *s) s = p;
		
	return(*s);
	
}
int main()
{
	int x[5] = { 12,21,13,6,18 };
	printf("%d\n", findmax(x, 5));
	
}
*/

//int main()
//{
//	/*int a[2] = { 1,3 }, * p = &a[0] + 1;
//	printf("%d\n", *p);*/
//
//	/*int* p, * q, k = 1, j = 10;   p = &j; q = &k;  p = q; (*p)++;
//	printf("%d", *q);*/
//
//	//char s[] = "\\141\141abc\t"; //’\141’为8进制，转10为97
//	//printf("%d\n", strlen(s));
//}

/* 杨辉三角
#define N 11

int main()
{
	//printf("%f\n",2);  err! 
	int i, j, a[N][N];
	for (i = 1; i < N; i++)
	{
		a[i][1] = 1;
		a[i][i] = 1;
	}
	for (i = 3; i < N; i++)
		for (j = 2; j <= i - 1; j++)
			a[i][j] = a[i-1][j] + a[i-1][j-1];
	for (i = 1; i < N; i++)
	{
		int k = 0;
		for (k = 1; k <= N-i; k++)
		{
			printf("  ");
		}
		for (j = 1; j <= i; j++)
			printf("%-4d", a[i][j]);
		printf("\n");
	}
	return 0;
}
*/

/* 素数
#include <stdio.h>
int isprime(int n)
{
	int i, f;
	f = 1;
	for (i = 2; i < n / 2; i++)
		if (n % i == 0)
		{
			f = 0;  
			i = n;
		}
	return(f);
}
main()
{
	int i = 100, n = 0;
	for (; i < 200; i++)
		if (isprime(i)) n++;
	printf("Numbers of prime:%d", n);
}


#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/

/*
void main()
{
	char ch[] = "I love Great Wall of China!"; 	  
	printf("%c", *(ch + 5));
}
*/

/*
#include <stdio.h>
#include <math.h>
//输出10000以内的水仙花数

int main()
{
	int i = 0;
	for (i = 100; i < 100000; i++)
	{
		int sum = 0;
		int count = 1;
		int tmp = i;
		//统计位数
		while (tmp / 10)  //如果i只有个位数 不执行循环
		{
			count++;
			tmp /= 10;
		}
		tmp = i;
		//每得到一位 计算和
		while (tmp)
		{
			sum += (int)pow(tmp % 10, count); //每次取余的数乘以次方数(count)放到sum
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/

//int main()
//{
//	int a = 666, b = 888;  printf("%d %d\n", a, b);
//}

/*
int main()
{
	ch = '\';
}*/

//void fun(int a[], int i, int j)
//{
//	int t;
//	if (i < j)
//		{ t = a[0]; a[0] = a[j]; a[j] = t;  i++; j--;  fun(a,i,j); }
//		
//}
//int main()
//{
//	int x[] = { 2,6,1,8 }, i;
//	fun(x, 0, 3);
//	for (i = 0; i < 4; i++) printf("%2d", x);
//	printf("\n");
//	
//}