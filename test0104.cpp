#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0 | n >= 1000){
        printf("N");
        return 0;
    }
    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    int count = 0;
    if (max == a)
        count ++;
    if (max == b)
        count++;
    if (max == c)
        count++;
    printf("%d %d", max, count);
}