#include <stdio.h>

void *month_name(int n)
{
    // do
    // {
    // }while(n >=1 && n <= 12);
    char *name[] = {"illegal month","January","February","March",
        "April","May","June","July","August","September",
        "October","November","December"};
    switch(n)
    {
        case 1:
            return name[1]; 
            break;
        case 2:
            return name[2]; 
            break;
        case 3:
            return name[3]; 
            break;
        case 4:
            return name[4]; 
            break;
        case 5:
            return name[5]; 
            break;
        case 6:
            return name[6]; 
            break;
        case 7:
            return name[7]; 
            break;
        case 8:
            return name[8]; 
            break;
        case 9:
            return name[9]; 
            break;
        case 10:
            return name[10]; 
            break;
        case 11:
            return name[11]; 
            break;
        case 12:
            return name[12]; 
            break;
        default:
            return name[0]; 
            break;
    }
    return 0;
}

int main()
{
    int n;
    printf("Please input n:>");
    scanf("%d",&n);
    printf("\nMonth N0.%d means %s\n",n,month_name(n));
}