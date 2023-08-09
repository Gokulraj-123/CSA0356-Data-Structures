#include<stdio.h>
int main()
{
	int n,arr[50],i,j;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Print duplicates in array: ");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				printf("%d\n", arr[i]);
			}
		}
	}
}
