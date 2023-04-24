// Linear Search
#include<stdio.h>
void main()
{
	int i,j,n,m,x,found,high,low,mid;
	scanf("%d",&n);
	int soln[n];
	for(i=0;i<n;i++){
		found=0;
		scanf("%d",&m);
		int b[m];
		for(j=0;j<m;j++)
			scanf("%d",&b[j]);
		scanf("%d",&x);
		high = n;
		low = 0;
		while(low<=high){
			mid = (low+high)/2;
			if(b[mid]==x){
				soln[i]=mid;
				found=1;
			}
			if(b[mid]>x)
				high=mid-1;
			else
				low=mid+1;
		}
/*		for(j=0;j<m;j++){
//			if(b[j]==x){
//				soln[i]=j;
//				found=1;
//				break;
//			}
*/
			if(!found)
				soln[i]=-1;
		
	}
	for(i=0;i<n;i++)
		printf("%d\n",soln[i]);
}
