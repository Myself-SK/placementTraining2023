//Strong Numbers
#include<stdio.h>
int fact(int n){
	int f=1,i;
	for(i=1;i<=n;i++)
		f*=i;
	return f;
}
void main(){
	int temp,i,sum=0,n;
	for(i=1;i<=999;i++){
		temp=i;
		sum=0;
		while(temp>0){
			sum = sum+fact(temp%10);
			temp/=10;
		}
		if(i==sum)
			printf("%d ",i);
	}
}
