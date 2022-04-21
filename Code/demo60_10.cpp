#include <stdio.h>
#include <stdlib.h>
//模拟qsort函数实现 排序任何类型数组

struct Stu
{
	char name[20];
	int age;
};

int cmp_int(const void* e1,const void* e2)
{   
    //整形比较
    return *(int*)e1 - *(int*)e2;
}

int cmp_stu(const void *e1,const void *e2)
{
    //结构体比较
    return ((struct Stu*)e2)->age - ((struct Stu*)e1)->age;
}

void Swap(char *s1,char *s2,int width) //char*不能完成交换，需要每一个元素的宽度
{
    int i = 0;
    for(i=0;i<width;i++)
    {
        int tmp = *s1;
        *s1 = *s2;
        *s2 = tmp;
        s1++;
        s2++;
    }
}

void bubble_sort(void *base,int sz,int width,int(*cmp)(const void *a,const void *b))  //抽离比较函数，在此用函数指针接收函数
{
    int i = 0;
    //趟数
    for(i=0;i<sz-1;i++)
    {
        int j = 0;
        //每一趟比较的对数
        for(j=0;j<sz-i-1;j++)
        {
            if(cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)  //当j=0时前一个base为首元素地址，后一个base+j+1则是后一个元素
            {
                Swap((char*)base+j*width, (char*)base+(j+1)*width,width); //需要传元素宽度
            }
        }
    }
}


void test1()
{
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void test2()
{
	struct Stu s[3] = {{"wangwu",37},{"zhangsan",46},{"lisi",30}};
    int sz = sizeof(s)/sizeof(s[0]);
    bubble_sort(s,sz,sizeof(s[0]),cmp_stu);
    int j = 0;
    for(j=0;j<sz;j++)
    {
        printf("%s,%d\n",s[j].name,s[j].age);
    }
}

int main()
{
	test1();
	test2();
}