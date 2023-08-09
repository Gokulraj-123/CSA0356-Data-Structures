#include<stdio.h>
int main()
{
	int n,i;
	int fact=1;
	printf("Enter the value: ");
	scanf("%d", &n);
	if(n>0){
		for(i=1;i<=n;i++){
			fact=fact*i;
		}
		printf("%d = factorial", fact);
	}
	else
	{
		printf("%d = not factorial", fact);
	}
}
