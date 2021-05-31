#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    gets(a);
    if (strlen(a) > 20)
        printf("N");
    else {
        for (int i = 0; i < strlen(a); i++)
            if (a[i] != ' ')
                printf("%c", a[i]);
        printf("@vku.udn.vn");
    }
}