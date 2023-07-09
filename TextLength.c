#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Bir kelime veya cümle girin: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // fgets ile alınan girişin sonundaki newline karakterini kaldırır

    int length = strlen(str);

    printf("Girilen kelimenin veya cümlenin uzunluğu: %d\n", length);

    return 0;
}
