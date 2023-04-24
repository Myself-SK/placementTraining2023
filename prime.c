#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j,prime;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		prime=0;
		for(j=2;j<=a[i]/2;j++){
			if(a[i]%j==0){
				prime=1;
				break;
			}
		}
		if(prime==0 && a[i]!=1)
			printf("%d ",a[i]);
	}
}
