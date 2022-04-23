#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>
//
//void rev()
//{
//	char c;
//	c = getchar();
//	if (c == '$')
//		printf("%c", c);
//	else
//	{
//		rev();
//		printf("%c", c);
//	}
//}
//
//int main()
//{
//	/*printf("%d",'\x1f');*/
//	//char* s; 
//	//char s[] = "abcde";
//	/*char s[300];
//	scanf("%s", s);*/
//	/*int i = 10;
//	for (i = 10; i > 0; i--)
//	{
//		
//	}
//	printf("%d", i);*/
//
//	rev();
//}

//int main()
//{
//	int m = 5;
//	if (m++ > 5)
//		printf("%d", --m);
//	else
//		printf("%d", m++);
//}

//int main()
//{
//	int a = 5, b = 1, c = 0;
//	if (a = b + c)
//		printf("***\n");
//	else
//		printf("$$$\n");
//}

//int main()
//{
//	int x = 10, y = 9;
//	int a, b, c;
//	a = (--x == y++) ? --x : ++y;
//	b = x++;
//	c = y;
//	printf("%d%d%d", a, b, c);
//}

//int main()
//{
//	long y = 23456;
//	printf("y=%8lx\n", y);
//	printf("y=%3lx\n", y);
//}

//int main()
//{
//	char ch1, ch2, ch3;
//	scanf("%c%c", &ch1, &ch2, &ch3);
//	printf("%c%c%c", ch1, ch2, ch3);
//}

//int main()
//{
//	/*int x, y, z;
//	scanf("%d%d%d", &x, &y, &z);
//	printf("x+y+z=%d\n", x + y + z);*/
//	/*char ch = '5 + 9'; err*/
//
//}

#include <stdio.h>

//int main()
//{
//    int a[9] = { 0,6,12,18,42,46,52,67,73 };
//    int x = 52;
//    int i, n = 9, m;
//    i = n / 2 + 1;
//    m = n / 2;
//    while (m != 0)
//    {
//        if (x < a[i])
//            i = i - m / 2 - 1;
//        else if (x > a[i])
//            i = i + m / 2 + 1;
//        else
//            break;
//        m = m / 2;
//    }
//    if (m)
//        printf("%d\n", i);
//    else
//        printf("Can not search.");
//
//    return 0;
//}

#include <stdio.h>
//#define LEN 12
//
//int main()
//{
//    int num[] = { 3,4,5,6,7,8,9,10,11,12,13,14 };
//    int i, j, k, x, y;
//    x = 0; y = LEN - 1;
//    while (x <= y)
//    {
//        j = num[x];
//        i = 2;
//        k = 1;
//        while (i <= j / 2 && k)  //判断j是否为素数
//        {
//            k = j % i++;
//        }
//        if (k)
//            printf("%3d", num[x++]);
//        else   //不是素数首位数据互换，尾指针前移
//        {
//            num[x] = num[y];
//            num[y--] = j;
//        }
//    }
//
//    
//        
//    for (i = 0; i < x; i++)
//    {
//        printf("%5d", num[i]);
//    }
//    
//    return 0;
//}

/*
int main()
{
	int i, j, k = 0, space, rows;
	printf("请输入要打印的行数:>");
	scanf("%d", &rows);
	for (i = 1; i <= rows; i++,k=0)
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
	for (i = 1; i <= rows-1; i++, k = 0)
	{
		for (space = 1; space <= i; ++space)
		{
			printf("  ");
		}
		while (k < 2 * (rows -i)-1)
		{
			printf("* ");
			++k;
		}
		printf("\n");
	}
}
*/

#include <stdio.h>

//int main()
//{
//	int  x, i, j = 0, n = 0;
//	int b[51] = { 7 ,16 ,5 ,4 ,6, 7, 9 ,8,3 ,2, 4, 6 ,12, 2, - 1 };
//	scanf("%d", &x);
//	while (x > -1)
//	{
//		b[++n] = x;
//		scanf("%d", &x);  //7 16 5 4 6 7 9 8 3 2 4 6 12 2 -1
//	}
//	for (i = 0; i <= n; i++) //n=14
//	{
//		if (b[i] % 2 == 0) 
//			b[++j] = b[i];
//	}
//		
//	for (i = 1; i <= j; i++)
//	{
//		printf("%3d", b[i]);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	char ch;
//	printf("input a string:\n");
//	ch = getchar();
//	for (; ch != '\n';);
//	{
//		n++;
//		ch = getchar();
//	}
//	printf("%d", n);
//}

#include <stdio.h>

int main()
{
	int i, t, sum = 0;
	for (t = i = 1; i <= 10;)
	{
		sum += t; i++;
		if (i % 3 == 0)
			t = -i;
		else
			t = i;
	}
	printf("sum = %d\n", sum);
	return 0;
}