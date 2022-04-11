#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5};
    printf("%p\n",arr);  //数组名是数组首元素的地址
    printf("%p\n",&arr[0]);
    printf("%d\n",*arr);

    /*两个例外
    sizeof(数组名) --数组名表示整个数组，sizeof(数组名)计算的是整个数组的，单位字节
    &数组名，数组名代表整个数组，取出的是整个数组的地址
    */
   printf("%p\n",&arr);
   printf("%p\n",&arr+1); //增加了28字节

}