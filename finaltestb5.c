#include <stdio.h>
#include <string.h>

struct congNhan{
    char hoTen[100];
    char gioiTinh[100];
    int namSinh;
    char queQuan[100];
} a[100];
int main() {
    int n;
    scanf("%d", &n);
    gets(a[0].hoTen);
    for (int i = 0; i < n; i++) {
        // printf("Ht: ");
        gets(a[i].hoTen);
        // printf("gt: ");
        gets(a[i].gioiTinh);
        // printf("NS: ");
        scanf("%d", &a[i].namSinh);
        gets(a[i].queQuan);
        // printf("qq: ");
        gets(a[i].queQuan);
    }
    for (int i = 0; i < n; i++) {
        puts(a[i].hoTen);
        puts(a[i].gioiTinh);
        printf("%d\n", 2021 - a[i].namSinh);
        puts(a[i].queQuan);
    }
}