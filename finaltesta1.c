#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a <= 0 || a > 1000000) || (b <= 0 || b > 1000000)) 
        printf("N");
    else 
        printf("%d", a + b);
}