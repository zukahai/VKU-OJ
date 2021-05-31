#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 10 || n > 99) {
        printf("N");
        return 0;
    }
    printf("%d", n % 10 + n / 10);
}