#include <stdio.h>
int main() 
{
    int size;
    char characters[size];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf(" %c", &characters[i]);
    }
    printf("Indices of repeated characters:\n");
    for (int i = 0; i < size; i++) {
        if (characters[i] == '\0') {
            continue; 
        }
        int isRepeated = 0;
        for (int j = i + 1; j < size; j++) {
            if (characters[j] == characters[i]) {
                printf("%c is repeated at indices %d and %d\n", characters[i], i, j);
                characters[j] = '\0';
                isRepeated = 1;
            }
        }
        if (isRepeated) {
            printf("%c is repeated at indices %d\n", characters[i], i);
        }
    }
    return 0;
}

