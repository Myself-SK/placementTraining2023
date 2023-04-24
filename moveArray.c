#include<stdio.h>
void move(int* l,int* r){
	int temp;
		while(l<r){
		if(*l>0 && *r>0)
			r--;
		if(*l<0 && *r<0)
			l++;
		if(*l>0 && *r<0){
			temp=*r;
			*r=*l;
			*l=temp;
			l++;
			r--;
		}
		if(*l<0 && *r>0){
			l++;
			r--;
		}
	}

}
void main(){
	int n;
	scanf("%d",&n);
	int a[n],i,temp;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int *l,*r;
	l=a;
	r=&a[n-1];
	move(l,r);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
