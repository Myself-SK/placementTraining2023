// Form 2d Matrix and print diagonal, non-diagonal, upper-diagonal, lower-diagonal
#include<stdio.h>
void main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c],i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
			
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" ");
			if(i==j)
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" ");
			if(i!=j)
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i>j)
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i<j)
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
