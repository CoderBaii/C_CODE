#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>

/*
void fun(int* a, int i, int j)
{
	int* t;
	  if (i < j)
	  { 
		  t = a[i]; a[i] = a[j]; 
		  a[j] = t; 
		  i++;
		  j--;  
		  fun(a,i,j); 
	  }
}

int main()
{
	int x[] = { 2,6,1,8 }, i;
	fun(x, 0, 3);
	for (i = 0; i < 4; i++) printf("%2d", x[i]);
	printf("\n");
	
}*/

/*
main()
{
	int a = 5, * b, ** c;
	c = &b; b = &a;
	printf("%d", **c);
}*/

/*
main()
 {
	char arr[2][4];
	strcpy(arr, "you"); strcpy(arr[1], "me");
	arr[0][3] = '&';
	printf("%s \n", arr);
	
}*/

/*
int main()
{
	int k = 1, j = 2, * p = &k, * q = p;    p = &j;
	printf(" % d % d", *p, *q);
}
*/

/*
#include <stdio.h>
int main(){   int j, k, a[2][2];
 for (k = 1; k < 3; k++)
	 for (j = 1; j < 3; j++)
		 a[k - 1][j - 1] = (k / j) * (j / k);
 for (k = 0; k < 2; k++)
	 for (j = 0; j < 2; j++)
		 printf("% d", a[k][j]);
 }
 */

/*
int main()
{
	int a, b, c, i;
	a = b = c = 0;
	for (i = 0; i < 10; i += 2)
		{ a += i;
			b += i - 1;
			c += b;
		}
	printf("偶数之和=%d\n", a);
	printf("奇数之和=%d\n", c);
}
*/

/*
int main()
{
	int a, b, c, i;
	a = c = 0;
	for (i = 0; i <= 10; i += 2)
	{
		a += i;
		b = i + 1;
		c += b;
	}
	printf("偶数之和=%d\n", a);
	printf("奇数之和=%d\n", c-11);
}
*/

/*
int main()
{
	int i, j;
	for (i = 0; i < 100; i++)
	{
		j = i * 10 + 6;
		if (j % 3 != 0) continue;
		printf("%d ", j);
	}
}
*/

/*
int main()
{
		double d = 3.2, y; int x;
		x = 1.2; y = (x + 3.8) / 5.0;
		printf("%0.1lf \n", y);
		printf("%d \n", d * y);	
}
*/

//#define MA(x) x*(x-1)
//int main()
//{
//	int a = 1, b = 2; printf("%d \n", MA(1 + a + b));
//}

/*
#include <stdio.h>
int f(int m)
{
	static int k = 2;
	k++;
	return k + m;
}
void main()
{
	int s;
	s = f(2);
	printf(" % d, % d\n", s, f(s));
}
*/

/*
int main()
{
	//printf("a\bre\'hi\'y\\\bou\n");
	int i = 0;
	do
	{
		printf("%d,", i);
	}
	while(i++);
	printf("%d\n", i);
}*/

/*
#define F(X,Y)  X*Y

int main()
{
	int k = 3, s[2];
	s[0] = k; k = s[1] * 10;
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		printf("%d ", s[i]);
	}
	int a = 3, b = 4;
	printf("%d\n", F(a + b, a - b));
}*/

int main()
{
	int x = 11;
	printf("%d", (++x) % 3);
}

