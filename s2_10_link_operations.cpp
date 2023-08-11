#include <stdio.h>
int main()
{
int n;
printf("\n\tEnter the no.of elements --> ");
if(scanf("%d",&n)){
	int arr[n];
	if(n>0)
	{
		int i;
printf("\n\tEnter the array elements --> ");
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
int ch;
printf("\n\tEnter the choice \n\t\t1.Insertion\n\t\t2.Deletion\n\t\t3.Display\n\t\t-->  ");
scanf("%d",&ch);
if(ch==1)
{
	printf("\n\t\t---INSERTION---");
	int pos;
printf("\n\tEnter the position the element to be inserted --> ");
scanf("%d",&pos);
int ele;
printf("\n\tEnter the element to be inserted --> ");
scanf("%d",&ele);
if(pos > n)
printf("Invalid Input");
else
{
for (i = n - 1; i >= pos-1; i--)
arr[i+1] = arr[i];
arr[pos-1] = ele;
printf("\n\tArray after insertion is:");
printf("\n\tArray --> { ");
for (i = 0; i <= n; i++)
printf("%d ", arr[i]);
printf("}");
}
}
else if(ch==2)
{
	printf("\n\t\t---DELETION---");
	int ind;
printf("\n\tEnter the index of the element to be deleted --> ");
scanf("%d",&ind);
for (i = ind; i<n; i++)
{
	arr[i] = arr[i+1];
}
printf("\n\tArray after deletion is:");
printf("\n\tArray --> { ");
for (i = 0; i < n; i++)
{
	printf("%d ", arr[i]);	
}
printf("}");
}
else if(ch==3)
{
	printf("\n\t\t---DISPLAY---");
	printf("\n\tARRAY --> { ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf(" }");
}
	}
	else if(n<0)
	{
		printf("\n\tNegative values are invalid input..!");
	}
}
else
{
	printf("\n\tCharacters are invalid input..!");
}        
return 0;
}
