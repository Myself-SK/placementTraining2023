//max sum such that all 2 adjacent number will produce in an array
#include<stdio.h>
void main(){
	int n;
	int a[n],i,r1,r2,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	sum = a[0]+a[1];
	r1=a[0];
	r2=a[1];
	for(i=0;i<n;i+=2){
		if(a[i]+a[i+1]>sum){
			r1=a[i];
			r2=a[i+1];
			sum=a[i]+a[i+1];
		}
	}
	printf("sum= %d\n",sum);
	printf("Adjacent Elements= %d,%d",r1,r2);
}
	
