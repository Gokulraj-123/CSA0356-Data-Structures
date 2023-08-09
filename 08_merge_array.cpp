#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50], b[50], s1, s2, i, k, merge[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &s1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<s1; i++)
    {
        scanf("%d", &a[i]);
        merge[i] = a[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &s2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<s2; i++)
    {
        scanf("%d", &b[i]);
        merge[k] = b[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
        printf("%d ", merge[i]);
    getch();
    return 0;
}
