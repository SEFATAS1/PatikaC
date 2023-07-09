#include <stdio.h>

int main() {
    float number;

    printf("Bir ondalık sayı girin: ");
    scanf("%f", &number);

    printf("Onaltılık (hexadecimal) olarak: %a\n", number);

    return 0;
}
