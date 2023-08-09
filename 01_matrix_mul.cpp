#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],k,r,c,i,j;
	printf("Enter the no.of.rows: ");
	scanf("%d", &r);
	if(r>0)
	{
		printf("Enter the no.of.columns: ");
		scanf("%d", &c);
		if(c>0)
		{
			printf("Enter the first matrix element:\n");
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					scanf("%d", &a[i][j]);
				}
			}
			printf("Enter the second matrix element:\n");
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					scanf("%d", &b[i][j]);
				}
			}
			printf("Multiple of two matrix:\n");
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					mul[i][j]=0;
					for(k=0;k<c;k++){
						mul[i][j]=a[i][k]*b[i][k];
					}
				}
			}
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					printf("%d\t", &mul[i][j]);
				}
				printf("\n");
			}
		}
	}
}
