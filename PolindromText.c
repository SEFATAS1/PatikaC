#include <stdio.h>
#include <string.h>

int isPalindrome(const char* word) {
    int length = strlen(word);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 0; // Palindrom değilse 0 döndür
        }
    }

    return 1; // Palindrom ise 1 döndür
}

int main() {
    char word[100];

    printf("Bir kelime girin: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0'; // fgets ile alınan girişin sonundaki newline karakterini kaldırır

    if (isPalindrome(word)) {
        printf("%s, bir palindromdur.\n", word);
    } else {
        printf("%s, bir palindrom değildir.\n", word);
    }

    return 0;
}
