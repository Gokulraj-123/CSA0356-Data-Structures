#include <stdio.h>

int main() {
    int array[100], p, i, n;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    printf("\nInput the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("\nEnter the position: ");
    scanf("%d", &p);

    if (p >= n + 1)
        printf("\nDeletion not possible.\n");
    else {
        for (i = p - 1; i < n - 1; i++)
            array[i] = array[i + 1];

        printf("\nArray after deletion: ");
        for (i = 0; i < n - 1; i++)
            printf("%d\n", array[i]);
    }

    return 0;
}
