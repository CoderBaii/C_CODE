#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>

//编写程序得知当前机器的字节序
//int main()
//{
//    int a = 20;
//    char* p = &a;
//    if (*p == 1)
//        printf("小端\n");
//    else
//        printf("大端\n");
//}

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	/*if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//	return *p; //1或者0
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;; //强制类型转换如何再解引用 就是地址
//}
//
////指针类型的意义：
////指针类型决定了指针解引用操作符能访问几个字符：char*p;*p访问一个字节，int*p，*p访问4个字节
////指针类型决定了步长，+1 -1加减的是几个字节，char加1跳过一个字节，int加1跳过一个整形，4字节
//
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d %d %d", a, b, c);  //ab不变 c为255
//	return 0;
//}

//有符号位(signed)的char范围为127~-128  无符号为最大为0~255
/*int main()
{
	char a = -128; */ //char a = 128; 输出也是一样的结果
	//10000000000000000000000010000000 原
	//11111111111111111111111101111111 反
	//10000000
	//整型提升
	//11111111111111111111111110000000 补
	//printf("%u\n", a);
	//%u打印十进制的无符号数 
	//无符号数无视符号位
//}

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//按补码形式进行运算 最后格式化为有符号整数
//	return 0;
//}
//原码取反加1得到补码 补码减一取反得到原码
//1000000 0000000 0000000 00110100  -20
//1111111 1111111 1111111 11101011  反
//1111111 1111111 1111111 11101100  补码
//0000000 0000000 0000000 00001010  10的补码
//1111111 1111111 1111111 11110110  相加结果-补
//1111111 1111111 1111111 11110101  反
//0000000 0000000 0000000 00001010  原码


//int main()
//{
//	unsigned int i;  //i永远不可能为负
//	for (i = 9; i >= 0; i++)
//	{
//		printf("%u\n", i); //死循环
//	}
//}

//int main()
//{
//	char a[1000];  //char类型最大值为127~-128  所以数组里存储的是-1 -2 -3...-128 127 126 125...3 2 1 0
//	//-1~-128有128个数 127-1有127个数 1后面是0 所以长度为255
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a)); //strlen计算的是'\0'之前的长度 '\0'的ASCLL码值为0
//}

int main()
{
	unsigned char i = 0;  //无符号char最大值为255
	for (i = 0; i <= 255; i++)  //i<=255恒成立 
	{
		printf("hello");
	}
}