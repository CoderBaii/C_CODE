#include <stdio.h>

int main(){
    int a, b, c;
    char ch = 'A';
    a = 10;
    b = a + ch;
    scanf("%d", &c);
    printf("%d,%d,%d,%c\n", a, b, c, ch);
    return 0;
}