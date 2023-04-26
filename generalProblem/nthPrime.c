#include<stdio.h>
void main(){
	int i,n,j,isprime,cnt=0;
	scanf("%d",&n);
	i=0;
	while(cnt<n){
		i++;
		isprime = 0;
		for(j=2;j<i;j++){
			if(i%j==0){
				isprime=1;
				break;
			}
		}
		if(isprime==0 && i!=1){
			cnt++;	
//			printf("%d ",i);				
		}
	}
	printf("%d",i);
}
