#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int A[100], n = 0;
    while (a > 0) {
        if ((a % 10) % 2 == 1)
            A[n++] = a % 10;
        a /= 10;
    }
    if (n == 0)
        printf("N");
    else 
        for (int i = n - 1; i >= 0; i--)
            printf("%d ", A[i]);
}