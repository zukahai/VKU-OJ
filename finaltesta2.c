#include <stdio.h>

int uocLe(int n) {
    for (int i = n; i >= 1; i--)
        if (n % i == 0 && i % 2 == 1)
            return i;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("N");
        return 0;
    }
    printf("%d", uocLe(n));
}