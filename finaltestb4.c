#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    int count = 0;
    for (int i = 0; i < n; i++)
        count += isPrime(a[i]);
    printf("%d", count);
}