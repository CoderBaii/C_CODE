#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>

/*
void main()
{
	char ch; int k = 0;
	for (ch = 'A'; ch < 'H'; ch++, k++)
		if (k % 2 == 0) printf(" % c", ch);
	printf("\n");
}
*/

/*
#include <stdio.h>
void main()
{
	int k = 0;
	char c = 'A';
	do {
		switch (c++)
		{
		case 'A': k++; break;
		case 'B': k--;
		case 'C': k += 2; break;
		case 'D': k = k % 2; break;
		case 'E': k = k * 10; break;
		default: k = k / 3;  //“是的,最末尾可以不加break,但是在中间或头部要加的 default是默认输出的的意思”
		}
		k++;
	} while (c < 'G');
	printf("k = % d\n", k);
}
*/


/*
#include <stdio.h>
void main()
{
	int a[6] = { 12,4,17,25,27,16 }, b[6] = { 27,13,4,25,23,16 }, i, j;
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++)
		{
			if (a[i] == b[j])break;
		}
		if (j < 6) printf("%d", a[i]);  //寻找在a数组且b中也存在的元素并输出
	}
	printf("\n");
}
*/

/*
main()
{
	char  a[] = "I am a boy.", b[20];
	int  i;
	for (i = 0; a[i] != '\0'; i++)
	{
		b[i] = a[i];
	}
	b[i] = '\0';
	printf("%s\n", b);
}
*/

/*
int main()
{
	int a = 1, b;
	for (b = 1; b <= 10; b++)
	{
		if (a >= 8) break;
		if (a % 2 == 1)
		{
			a += 5;
			continue;
		}
		a -= 3;
	}
	printf("%d\n", b);
}
*/

/*
#include <string.h>
char* ss(char* s)
{
	return s + strlen(s) / 2;
}
main()
{
	char* p, * str = "abcdefgh";
	p = ss(str);
	printf("%s\n", p);
}
*/

/* 判断是否为回文
#include <stdio.h>
#include <string.h>
char* huiwen(char* str)
{
	char* p1, * p2;
	int i, t = 0;
	p1 = str;
	p2 = str + strlen(str) - 1;
	for (i = 0; i <= strlen(str) / 2; i++)
		if (*p1++ != *p2--)
		{
			t = 1;
			break;
		}
	if (t == 0)
		return("yes!");
	else
		return("no!");
}
main()
{
	char str[50];
	printf("Input:");
	scanf("%s", str);
	printf("%s\n",huiwen(str));
}
*/

/*
#include <stdlib.h>

void  trans(int  b[4][4])   //转置函数
{
	int  i, j, temp;
	for (i = 0; i < 4; i++)
		for (j = i+1; j < 4; j++)
		{
			temp = b[i][j];
			b[i][j] = b[j][i];
			b[j][i] = temp;
		}
}

int  findmin(int  b[4][4])      //求对角线上最小的元素
{
	int  min, i, j;
	min = b[0][0];
	for (i = 0; i < 4; i++)
	{
		//对角线 所以应该为b[i][i] < min
		if (b[i][i] < min)
			min = b[i][i];
	}
	return  min;
}
main()
{
	int  i, j;
	int  min;
	int a[4][4] = { {1,2,3,4},{2,4,6,9},{5,8,9,7},{7,1,6,21} };
	//for (i = 0; i < 4; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		scanf("%d", &a[i][j]);
	//	}
	//}
	trans(a);
	printf("the result is : \n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%-2d", a[i][j]);
		printf("\n");
	}
	min = findmin(a);
	printf("the min is: %d ", min);
}
*/

/*
main()
{
	char a = '1', b = '2';
	printf("%c,", b++);
	printf("%d\n", b - a);
}
*/

int main()
{
	char  str[] = "China";
	printf(" % d", strlen(str));
}