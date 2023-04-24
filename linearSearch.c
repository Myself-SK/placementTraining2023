// Linear Search
#include<stdio.h>
void main()
{
	int i,j,n,m,x,found;
	scanf("%d",&n);
	int soln[n];
	for(i=0;i<n;i++){
		found=0;
		scanf("%d",&m);
		int b[m];
		for(j=0;j<m;j++)
			scanf("%d",&b[j]);
		scanf("%d",&x);
		for(j=0;j<m;j++){
			if(b[j]==x){
				soln[i]=j;
				found=1;
				break;
			}
			if(!found)
				soln[i]=-1;
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",soln[i]);
}
