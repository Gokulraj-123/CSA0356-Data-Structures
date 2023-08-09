#include <stdio.h>
int main() {
    int registerNumbers[] = {123, 234, 345, 456, 567, 678};
    int listSize = sizeof(registerNumbers) / sizeof(registerNumbers[0]);
    int searchNumber;
    int found = 0;
    int index = -1;
    printf("Enter the search register no: ");
    scanf("%d", &searchNumber);

    for (int i = 0; i < listSize; i++) {
        if (registerNumbers[i] == searchNumber) {
            found = 1;
            index = i;
            break;
        }
    }
    if (found) {
        printf("Register number %d found at index %d\n", searchNumber, index);
    } else {
        printf("Register number %d not found in the list\n", searchNumber);
    }
    return 0;
}

