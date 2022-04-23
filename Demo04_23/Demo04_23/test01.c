#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>

//int main()
//{
//    char c1, c2;
//    scanf("%4c%4c", &c1, &c2); //怎么输入使c1为A c2为B
//    printf("%c%c\n", c1,c2);
//}

//#include <stdio.h>
//
//double_mypow(double x, int y)
//{
//    return 0;
//}
//
//int main()
//{
//    double a = 0.0;
//    int b = 0;
//    scanf("%lf,%d", &a, &b);
//    printf("%d", double_mypow(a, b));
//    return 0;
//}

#include <stdio.h> #include <string.h>
#include <assert.h>

//void insert(char* a, char* b)
//{
//    assert(*a != 0);
//    char max = a[0];
//    int i = 1, j=0;
//    while (a[i])
//    {
//        if (a[i] > max)
//        {
//            max = a[i];
//            j = i;
//        }
//        i++;
//    }
//    for (i = strlen(a) + strlen(b) - 1; i > j; i--)
//    {
//        a[i] = a[i - strlen(b)];
//        j = 0;
//        i++;
//    }
//    while (b[j])
//    {
//        a[i] = b[j];
//        i++;
//        j++;
//    }
//    printf("%s\n", a);
//}
//
//int main()
//{
//    char a[50], b[] = "VB";
//    gets(a);
//    insert(a, b);
//    
//    return 0;
//}
//
//int my_strlen(char* str)
//{
//    int n = 0;
//    while (*str != '\0')
//    {
//        n++;
//        str++;
//    }
//    return n;
//}
//
//
//int main()
//{
//    char a[30] = "adsfg";
//    printf("%d\n", my_strlen(a));
//
//    return 0;
//}

int main()
{
    int a = 1, b = 0;
    if (!a) b++;
    else if (a == 0)
        if (a)
            b += 2;
        else b += 3;
    printf("%d\n", b);
}