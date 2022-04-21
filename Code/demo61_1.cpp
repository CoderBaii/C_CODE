#include <stdio.h>

int main()
{
    unsigned long pulArray[] = {6,7,8,9,10};
    unsigned long *pulPtr;

    pulPtr = pulArray;
    *(pulPtr + 3) += 3;  //把9改成12

    printf("%d, %d\n",*pulPtr,*(pulPtr + 3));
    return 0;
}

#include <stdio.h>
#include <assert.h>
#include <string.h>

void reverse(char *str) //指针接收
{
    //字符串逆序
    assert(*str != 0); //断言
    char* left = str;
    int len = strlen(str);
    char* right = str + len - 1;  //字符串末尾元素等于首元素加长度减一

    while(left < right)  //大于和等于都没有交换的必要
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char a[256] = {0};
    //scanf("%s",a);
    gets(a);
    reverse(a);
    printf("%s\n",a);
}

#include <stdio.h>

int main()
{
    int a = 0;
    int n = 0;
    scanf("%d%d",&a,&n);
    int sum = 0;
    int ret = 0;
    for(int i=0;i<n;i++)
    {
        ret = ret * 10 + a;
        sum += ret;
    }
    printf("%d\n",sum);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    for(i=0;i<=100000;i++)
    {
        //判断i是否为水仙花数(自幂数)
        int count = 1; //至少有一位数
        //1.计算i的位数 - count位数
        int sum = 0;
        int tmp = i; //i值改变会影响下面的计算
        while(tmp /= 10)
        {
            count++;
        }
        //2.计算i的每一位的n次方之和 sum
        tmp = i;
        while(tmp)
        {
            sum += pow(tmp%10,n);
            tmp /= 10;
        }
        //3.比较i == sum
        if(i == sum)
        {
            printf("%d ",i);
        }
    }
}


//打印菱形
#include <stdio.h>

int main()
{
    int i, space, rows, k=0;
 
    printf("输入行数:> ");
    scanf("%d",&rows);
 
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)  //空格
        {
            printf("  ");
        }
 
        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }
 
        printf("\n");
    }

    for(i=1; i<=rows-1; ++i,k=0)
    {
        for(space=1; space<=i; ++space)  //空格
        {
            printf("  ");
        }
 
        while(k < 2*(rows-i)-1)
        {
            printf("* ");
            ++k;
        }
 
        printf("\n");
    }
    
    return 0;
}

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


