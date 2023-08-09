#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value: ");
	scanf("%d", &n);
	if(n<0 || n>0){
		if(n%2==0){
			printf("%d is even number", n);
		}		
		else{
			printf("%d is odd number", n);
		}
	}
}
