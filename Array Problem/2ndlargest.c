#include<stdio.h>
void main(){
	int n;
	int a[n],i,r1,r2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	r1 = a[0];
	r2 = a[1];
	for(i=2;i<n;i++){
		if(a[i]>r1){
			r2=r1;
			r1=a[i];
		}
		else if(a[i]>r2)
			r2=a[i];
	}
	printf("%d\t%d",r1,r2);
}
