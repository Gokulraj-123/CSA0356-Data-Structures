#include <stdio.h>
#include <stdbool.h>

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    bool isValid = true;
    
    for (int i = 0; input[i] != '\0'; i++) {
        if (!((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z'))) {
            isValid = false; // Character is not a letter
            break;
        }
    }

    if (isValid) {
        printf("The input string is valid.\n");
    } else {
        printf("The input string is not valid.\n");
    }

    return 0;
}

