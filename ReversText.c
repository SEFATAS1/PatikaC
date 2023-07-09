#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Bir metin girin: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // fgets ile alınan girişin sonundaki newline karakterini kaldırır

    reverseString(str);

    printf("Tersine çevrilmiş metin: %s\n", str);

    return 0;
}
