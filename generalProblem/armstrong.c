//Armstrong Numbers
#include<stdio.h>
void main(){
	int temp,i,sum=0,n;
	for(i=1;i<=999;i++){
		temp=i;
		sum=0;
		while(temp>0){
			n =temp%10;
			sum = sum+n*n*n;
			temp/=10;
		}
		if(i==sum)
			printf("%d ",i);
	}
}
