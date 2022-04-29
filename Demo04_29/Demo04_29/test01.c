#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>

/*
int main()
{
	int a, b;
	scanf("a=%d,b=%d", &a, &b);
	printf("%d%d", a, b);
}

fun(int a, int b, int c)
{
	c = a * b;
}
void main()
{
	int c;
	fun(2, 3, c);
	printf(" % d\n", c);
}
*/

/*
int main()
{
	int k = 0;
	while (k = 1)
	{
		k++;
		printf("%d", k);
	}
}
*/

/*
fun(int x, int y, int z)
{
	z = x * x + y * y;
}
main()
{
	int a = 31;
	fun(5, 2, a);
	printf(" % d", a);
}
*/

/*
#define SQR(X) X*X
main()
{
	int a = 16, k = 2, m = 1;
	a /= SQR(k + m) / SQR(k + m);
	printf("%d\n", a);
}
*/

/*
#define N 10

fun(int* a, int n)
{
	int i, j = 0, p;
	p = j;
	for (i = j; i < N; i++)
		if (a[i] < a[p])p = i;
	return(p);
}

int main()
{
	int a[N] = { 10,25,3,89,5,6,7,8,9,10 };
	
	printf("%d\n", fun(a, 10));
}*/

/*
int main()
{
	//printf("%o\n", 010 << 1 ^ 1);
	int k;
	float s;
	for (k = 0, s = 0; k < 7; k++)
		s += k / 2;
	printf("%d, %f\n", k, s);
}
*/

/*
main()
{
	int k;
	for (k = 1; k < 5; k++) {
		if (k % 2)  printf("*");
		else continue;
		printf("#");
	}
}*/

/*
int main()
{
	//int* p, * q, k = 5, j = 6;
	//q = &k;  p = q;   q = &j;
	//printf("%d", *p);
	char* a[2] = { "one", "two" }, ** p = a;
	printf("%s,", *(p++) + 1);
	printf("%c\n", **p - 1);
}
*/

/*
void main()
{
	int a = 3, b = 5;
	swap(&a, &b);
	printf("After swap %d, %d", a, b);
}
swap(int* p, int* q)
{
	int t;
	t = *p; ;
	*p = *q;
	*q = t;
}*/

/*
main()
{
	int  i = 2,j = 3,k;
	k = i + j;
	{
		int  k = 8;
		if (i = 3)
			printf("%d", k);// i = 3是赋值
		else
			printf("%d", j);
	}
	printf("%d%d", i, k); //花括号内不影响外部
}*/

/* 升序
#define SIZE 8
void  main()
{
	char s[] = "GDBFHACE";   int  i, j, t;
	  for(i = 0;i < SIZE;i++)
	 {
		for(j = i+1;j <= SIZE;j++)
			if (s[i] > s[j]) { t = s[i]; s[i] = s[j]; s[j] = t; }
	  }
	  for (i = 0; i < SIZE; i++)
		  printf("% c", s[i]);
}*/

/*
int fun(int a,int b,int* cn,int* dn)
{
	*cn = a * a + b * b; *dn = a * a - b * b; a = 5; b = 6;
}
main()
{
	 int a = 4,b = 3,c = 5,d = 6;
	 fun(a,b, &c, &d);
	 printf("a = % d,b = % d,c = % d,d = % d\n", a, b, c, d);
}*/

/*
int fun(int x)
{ 
	static y = 2;
	y++;
	x += y;
	return x;
}
void main()
{
	int k;
	k = fun(3);
	printf(" % d, % d\n", k, fun(k));
}*/

/*
main()
{
	int m;
	for(m = 100;m <= 200;m++)
		if( m % 3 != 0 && m % 5 == 0)
		   printf("%d\t",m);
}*/

/*
int main()
{
	int m[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
	int i, j, * p = m;
	for(i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%4d", *(p+i*3+j));
			//printf("%4d", *(p + i + j * 4));
		printf("\n");
	}
}*/

/*
swap(int* p1,int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int a[5] = { 1,3,5,7,9 };
	int b[5] = { 2,4,6,8,10};
	int i; 
	for (i = 0; i < 5; i++)
		swap(&a[i], &b[i]);
	for(i = 0;i < 5;i++)
		printf("a[%d]=%-4d",i,a[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("b[%d]=%-4d", i, b[i]);
	printf("\n");
}*/

/*
int func(int a, int b)
{
	return(a + b);
}
main()
{
	int x = 2, y = 5, z = 8, r;
	r = func(func(x, y), z);
	printf(" % \d\n", r);
}*/

/*
long fib(int n)
{
	if (n > 2) return(fib(n - 1) + fib(n - 2));
	else return(2);
}
main()
{
	printf(" % d\n", fib(3));
}*/

/*
fun(int x, int y, int z)
{
	z = x * x + y * y;
}
main()
{
	int a = 31;
	fun(5, 2, a);
	printf(" % d", a);
}*/

/*
void fun(int* x, int* y)
{
	printf(" % d % d", *x, *y); *x = 3; *y = 4;
}
main()
{
	int x = 1, y = 2;
	fun(&y, &x);
	printf(" % d % d", x, y);
}*/

/*
long fun(int n)
{
	long s;
	if (n == 1 || n == 2) s = 2;
	else s = n - fun(n - 1);
	return s;
}
main()
{
	printf("% ld\n", fun(3));
}*/

/*
#define SQR(X) X*X
main()
{
	int a = 16, k = 2, m = 1;
	a /= SQR(k + m) / SQR(k + m);  //16 /= 2 + 1x2 + 1 / 2 + 1x2 + 1 = 16 / 7 = 2
		printf("%d\n", a);
}

# include <stdio.h>
int f(int x)
{
	static y = 1;
	y++;
	x += y;
	return x;
}
void main()
{
	int k;
	k = f(3);
	printf("%d  %d\n", k, f(k));
}*/

int main()

{
	int* p, * q, k = 5, j = 6;
	q = &k;  p = q;   q = &j;
	printf("%d", *p);
}
