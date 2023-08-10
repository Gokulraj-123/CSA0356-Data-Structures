#include <stdio.h>
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int elements[size];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &elements[i]);
    }
    int step = 5;  
    int fifthElement;
    for (int i = 0; i < size; i++) {
        if (i % step == step - 1) {
            fifthElement = elements[i];
            break;
        }
    }
    printf("The 5th iterated element is: %d\n", fifthElement);
    return 0;
}

