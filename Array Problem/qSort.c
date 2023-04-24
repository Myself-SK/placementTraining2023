//QSort and Find kth largest element
#include<stdio.h>
#include<stdlib.h>
int compare(const void *aa, const void *bb){
	int n1 = *(int*)aa;
	int n2 = *(int*)bb;
	return n2-n1;
//	return n1-n2; for ascending
}
int main(){
	int a[]={1,5,6,3,7};
	int i,x;
	qsort(a,5,sizeof(int),compare);
	scanf("%d",&x);
		printf("%d ",a[x-1]);
}
