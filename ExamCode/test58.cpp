#include <stdio.h>
#include <math.h>

float f(float a,float b,float c)
{
    float value;
    value = sin(a)/sin(a-b)*sin(a-c)+sin(b)/sin(b-c)*sin(b-a)+sin(c)/sin(c-a)*sin(c-b);
    return(value);
}

int main()
{
    float x,y,z,sum;
    printf("input x,y,z:\n");
    scanf("%f%f%f",&x,&y,&z);
    sum = f(x,y,z);
    printf("sum=%f\n",sum);
}
