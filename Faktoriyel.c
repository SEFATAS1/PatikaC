#include <stdio.h>

unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    unsigned int num;

    printf("Bir sayı girin: ");
    scanf("%u", &num);

    unsigned long long result = factorial(num);

    printf("Faktöriyel: %llu\n", result);

    return 0;
}
