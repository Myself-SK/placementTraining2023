// if i throw a die n times print count of the palindrome out of all those outcomes
#include<stdio.h>
int checkPalin(int n){
	int rev = 0,temp=n;
	while(n>0){
		if(n%10>=1 && n%10<=6){
			rev=rev*10+n%10;
			n/=10;
		}
		else{
			return 0;
		}
	}
	if(temp==rev)
		return 1;
	else
		return 0;
}
int main(){
	int n,i,count=0;
	scanf("%d",&n);
	int min=0,max=0;
	for(i=1;i<=n;i++){
		min=min*10+1;
		max=max*10+6;
	}
	for(i=min;i<=max;i++){
		if(checkPalin(i))
			count++;
	}
	printf("%d",count);
		
}
