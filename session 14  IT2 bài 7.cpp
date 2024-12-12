#include <stdio.h>

int main() {
    char str[1000];
    int letters = 0, digits = 0, special = 0;

    printf("Nhap chuoi : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != '\n') { 
            special++;
        }
    }

    // In k?t qu?
    printf("Su ly chu cai : %d\n", letters);
    printf("Su ly chu so : %d\n", digits);
    printf("Su ly ky tu dac biet : %d\n", special);

    return 0;
}
