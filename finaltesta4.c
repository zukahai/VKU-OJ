#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    printf("%d\n", max);
    int count = 0;
    for (int i = 0; i < n; i++)
        count += (a[i] == max);
    printf("%d", count);
}