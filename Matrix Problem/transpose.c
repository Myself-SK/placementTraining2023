#include<stdio.h>
void main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c],t[c][r],i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			t[i][j] = a[j][i];
		}
	}
	for(i=0;i<c;i++){
		for(j=r-1;j>=0;j--){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	
		
			
}
