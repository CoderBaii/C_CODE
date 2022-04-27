#include <stdio.h>
//素数

int main()
{
	int i=0;
    int j=0;
	for (i = 100; i <= 200; i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if (i % j == 0)
		    {
			    break;
		    }
        }
        if(j == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}