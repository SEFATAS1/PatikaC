#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortIntArr(int arr[], int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int size, i;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);

    int arr[size];

    printf("Elemanları girin:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    sortIntArr(arr, size);

    printf("Sıralanmış dizi: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
