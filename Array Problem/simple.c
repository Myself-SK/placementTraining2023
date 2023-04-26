#include<stdio.h>
int a[100],i=0;
void dectobin(int n){
	if(n!=0)
		dectobin(n/2);
	a[i++]=n%2;
}
int convert(int n){
	int d=0,k=0,rem;
	while(n!=0){
		rem=n%10;
		n/=10;
		d+=rem*pow(2,k);
		k++;
	}
}
void main(){
	dectobin(10);
	int j,n=0;
	for(j=1;j<i;j++)
		if(a[j]==0)	
			a[j]=1;
		else
			a[j]=0;
	
	for(j=1;j<i;j++)
		n=n*10+a[j];
	printf("%d",convert(n));
	
}
