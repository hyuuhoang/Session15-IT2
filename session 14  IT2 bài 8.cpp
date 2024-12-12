#include <stdio.h>

int main() {
    char str[1000];

    printf("nhap chuoi : ");
    fgets(str, sizeof(str), stdin);

    int capitalize = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            capitalize = 1;
        } else if (capitalize && ((str[i] >= 'a' && str[i] <= 'z'))) {
            str[i] -= 32;
            capitalize = 0;
        } else if (str[i] != ' ') {
            capitalize = 0;
    }
}
    printf("Chuoi sau khi viet hoa : %s", str);

    return 0;
}

