#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        printf("N");
        return 0;
    }
    int k = ((int)(-1 + sqrt(1 + 8 * n)) / 2);
    printf("%d", k);
}