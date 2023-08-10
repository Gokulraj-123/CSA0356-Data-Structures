#include<stdio.h>
int main()
{
	int n,a[n],i,j,k,p,e;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the position for insertion: ");
	scanf("%d", &p);
	printf("Enter the element: ");
	scanf("%d", &e);
	if(p>n)
	{
		printf("Invalid position");
	}
	else
	{
		for(i=n-1;i>=p-1;i--)
		a[n+1]=a[i];
		a[p-1]=e;
		printf("After inserting the element:\n");
		for(i=0;i<=n;i++)
		{
			printf("%d\n", a[i]);
		}
		}
}
