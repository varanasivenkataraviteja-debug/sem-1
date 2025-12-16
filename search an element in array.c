#include<stdio.h>
int main()
{
	int a[5],i,n,key,found=0;
	printf("Enter how many elements you want ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	for (i=0;i<n;i++)
	{
		printf("enter %d number :",i );
		scanf("%d",&a[i]);
		
	}
	printf("enter what element you want");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		   found=1;
		   break;
    	}
	 	
	}
	if(found)
	  printf("given number is in array in %d position",i+1);
	else
	   printf("given number is  not in array");
	 return 0;
}
