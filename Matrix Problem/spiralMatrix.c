#include<stdio.h>
void main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c],t[c][r],i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	int sr=0,sc=0,er=r-1,ec=c-1;
	
	for(i=sc;i<=ec;i++)
		printf("%d ",a[0][i]);
	for(i=1;i<=er;i++)
		printf("%d ",a[i][c-1]);
	for(i=c-2;i>=0;i--)
		printf("%d ",a[r-1][i]);
	for(i=r-2;i>=1;i--)
		printf("%d ",a[i][0]);
			
}
