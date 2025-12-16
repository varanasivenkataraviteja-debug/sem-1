#include<stdio.h>
int main()
{
	int a[5],i,n,min;
	printf(" enter how many elements you want ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter %d number :",i );
		scanf("%d",&a[i]);
		
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		   min=a[i];
	}
	printf("min is %d",min);
	return 0;
}
