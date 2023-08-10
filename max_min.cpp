#include <stdio.h>
int main() 
{
    int n;    
    printf("Enter the number of elements: ");
    scanf("%d", &n);   
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }    
    int numbers[n]; 
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int min = numbers[0];
    int max = numbers[0];
    
    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

