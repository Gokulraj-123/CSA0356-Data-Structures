#include<stdio.h>
int main()
{
	int r,c,i,j,mat[i][j];
	printf("Enter the no.of.rows: ");
	scanf("%d",&r);
	printf("Enter the no.of.columns: ");
	scanf("%d",&c);
	printf("Enter the no.of.elements in an matrix: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	int largest=mat[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(mat[i][j]>largest){
				largest=mat[i][j];
			}
		}
	}
	printf("The largest elements in an matrix is %d\n: ",largest);
	return 0;
}
