#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 0:
            printf("Chu Nhat");
            break;
        case 1:
            printf("Thu Hai");
            break;
        case 2:
            printf("Thu Ba");
            break;
        case 3:
            printf("Thu Tu");
            break;
        case 4:
            printf("Thu Nam");
            break;
        case 5:
            printf("Thu Sau");
            break;
        case 6:
            printf("Thu Bay");
            break;
        default:
            printf("F");
            break;
    }
}