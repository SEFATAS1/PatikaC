#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Dosyayı yazmak için açma
    file = fopen("metin.txt", "w");
    if (file == NULL) {
        printf("Dosya oluşturulamadı!\n");
        return 1;
    }

    printf("Metin girin: ");
    fgets(text, sizeof(text), stdin);

    // Dosyaya metni yazma
    fprintf(file, "%s", text);

    // Dosyayı kapatma
    fclose(file);

    // Dosyayı okuma için açma
    file = fopen("metin.txt", "r");
    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    printf("\nDosyadaki Metin:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    // Dosyayı kapatma
    fclose(file);

    return 0;
}
