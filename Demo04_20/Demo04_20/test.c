#define _CRT_SECURE_NO_WARNINGS	1

#include <stdio.h>

/*
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;

	c = a + b; //整形提升
	//00000000000000000000000011001000 -a
	//00000000000000000000000001100100 -b
	//00000000000000000000000100101100 a+b  直接%d输出，结果是300

	//00101100 -c  以%d输出要整形提升
	//00000000000000000000000000101100 符号位是0 正数 原反补相同

	printf("%d %d", a + b, c);
	//a+b 300   c 44

	return 0;
}
*/

//int year(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int month(int b, int c)
//{
//	int i, a[12] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
//	for (i = 1; i < b; i++)
//	{
//		c += a[i];
//	}
//	return c;
//}
//int main()
//{
//	int a, b, c, days;
//	printf("input year month and day:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	days = month(b, c);
//	if (year(a) && b > 3)
//	{
//		days += 1;
//	}
//	printf("the day is the %d day in this year", days);
//	return 0;
//}


/*
#include <string.h>

int ala(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int longest(char string[])
{
	int len = 0, i, lenth = 0, flag = 1, place = 0, point;
	for (i = 0; i <= strlen(string); i++)
	{
		if (ala(string[i]))
		{
			if (flag)
			{
				point = i;
				flag = 0;
			}
			else
			{
				len++;
			}
		}
		else
		{
			flag = 1;
			if (len >= lenth)
			{
				lenth = len;
				place = point;
				len = 0;
			}
		}

	}
	return place;
}
int main()
{
	int i;
	char line[100];
	printf("input a sentence:\n");
	gets(line);
	printf("the longest word is: ");
	for (i = longest(line); ala(line[i]); i++)
	{
		printf("%c", line[i]);
	}
	printf("\n");
	return 0;
}

*/

//int main()
//{
//	//char* sp = "right!";
//	char s[10] = "right!";
//	printf("%s", s);
//}

/*
int main()
{
	char* pc = "#Fujian##Province#";
	while (*pc)
	{
		while (*pc == '#')
		{
			pc++;
			
		}
		if (*pc == '\0')
				break;
		printf("%c", *pc);
		pc++;
	}
	printf("\n");
}*/

funa(char* s1, const char* s2)
{
	while (*s2)
	{
		*s1++ = *s2++;
	}
		
}

int main()
{
	char a[20] = "adb";
	char b[20] = "dghg";
	funa(a, b);
	printf("%s %s", a, b);
	return 0;

}