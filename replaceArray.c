// replace Kth Array Element
#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int a[n],i,k,temp;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	temp=a[n-k];
	a[n-k]=a[k-1];
	a[k-1]=temp;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
}
