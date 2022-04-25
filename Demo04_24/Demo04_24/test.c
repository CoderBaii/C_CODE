#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>

/*
int main()
{
	int i = 4;
	for (printf("%d", i); i < 2; i++)
		printf("%d", i);
}
*/

/*
int k = 5;
void f(int *s)
{
	s = &k;
	*s = 7;
}

int main()
{
	int k;
	for (k = 2; k == 0;)
		printf("%d", k--);
	int m = 3;
	f(&m);
	printf("%d,%d\n", m, k);
}
*/

/*
int main()
{
	int x[] = { 8,2,6,12,5,15 }, f1, f2;
	int* p = x;
	f1 = f2 = x[0];
	for (; p <= x + 5; p++)
	{
		if (f1 < *p)
			f1 = *p;
		if (f2 > *p)
			f2 = *p;
	}
	printf("%d,%d\n", f1, f2);
}
*/

/*
int main()
{
	int x[3][4] = { 1,3,5,7,9,11,2,4,6,8,10,12 };
	int(*p)[4] = x, k = 1, m, n = 0;
	for (m = 0; m < 2; m++)
	{
		n += *(*(p + m) + k);
	}
	printf("%d\n", n);
}
*/

/*
int main()
{
	char b[4][10], c;
	int i, j;
	for (i = 0; i < 4; i++)
	{
		j = 0;
		while ((c = getchar()) != ' ' && c != '\n')
			b[i][j++] = c;
		b[i][j] = '\0';
	}
	printf("%s%s%s%s\n", b[0], b[1], b[2], b[3]);
	//无空格
}*/

/*
void convert(char ch)
{
	if (ch < 'X')
	{
		convert(ch + 1);
	}
		
	printf("%c", ch);
}

int main()
{
	convert("W");
	printf("\n");
}
*/

/*
int main()
{
	long y = 23456l;
	printf("y=%3lx\n", y);
	printf("y=%8lx\n", y);
	printf("y=%#8lx\n", y);
}
*/


/*
int main() 
{
	int m, n;
	printf("Enter m,n:");
	scanf("%d%d", &m, &n);
	while (m != n) {
		while (m > n) 
			m = m - n;
		while (n > m) 
			n = n - m;
	}
	printf("m=%d\n", m);
	return 0;
}*/

/*
int main()
{
	int a, b, c;
	scanf("%d,%d,%d,%d", &a, &b, &c);
	printf("%d%d%d", a, b, c);
	int y = 10;
	while (y--);
	printf("%y=%d\n", y);
}
*/

/*
int main() 
{
	int m = 1, n = 2, * p = &m, * q = &n, * r;
	r = p; p = q; q = r;
	printf("%d,%d,%d,%d\n", m, n, *p, *q);
}
*/

/*
int main()
{
	int k = 5;
	while (--k)
	{
		printf("%d", k -= 3); //1
	}
	printf("\n");
}
*/


/*
int main()
{
	int* p;
	scanf("%d", &p);
	printf("%d", 8);
}*/

int main()
{
	int i, score[10];
	float sum = 0, aver = 0.0;
	printf("Input 10 number:");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &score[i]);
		sum = sum + score[i];
	}
	aver = sum / 10.0;
	printf("Sum=%10.2f\n", sum);
	printf("average=%10.2f", aver);
}