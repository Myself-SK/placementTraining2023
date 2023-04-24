//Sort the given array using linear search replace all odd numbers with 0 even numbers with 1
#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		a[i]%2==0?printf("0 "):printf("1 ");
	}
}
