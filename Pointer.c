#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // İşaretçilere değişkenlerin adreslerini atama
    ptr1 = &num1;
    ptr2 = &num2;

    // İşaretçiler aracılığıyla değişkenlere değer atama
    *ptr1 = 10;
    *ptr2 = 20;

    // İşaretçiler aracılığıyla değişkenlerin değerlerini ekrana yazdırma
    printf("num1 = %d\n", *ptr1);
    printf("num2 = %d\n", *ptr2);

    return 0;
}
