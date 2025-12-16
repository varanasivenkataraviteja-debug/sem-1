#include<stdio.h>
int main()
{
	int n,i,j,temp,max;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) 
	{
	printf("enter %d array elements:",i);
	scanf("%d",&a[i]);
    }  
    for(i=0;i<n;i++)
    {
    	max=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(a[j]>a[max])
    		{
    			min=j;
			}
		}
    	temp=a[i];
    	a[i]=a[max];
    	a[max]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	
	
}
