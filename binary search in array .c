#include<stdio.h>
int main()
{
	int key,l,found=0,n,r,i,a[10],mid;
	printf("enter how many elements you want :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d element",i);
		scanf("%d",&a[i]);
	}
	printf("enter what element you want ");
	scanf("%d",&key);
	l=0;
	r=n-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(key==a[mid])
		   {
		   found=1;
		   break;
	       }
		else if(key<a[mid])
		   r=mid-1;
		else
		   l=mid+1;
	}
	if(found)
	 printf("given element %d is at position %d ",key,mid);
	else
	  printf("given element %d is not found",key);
	return 0; 
	  
}
