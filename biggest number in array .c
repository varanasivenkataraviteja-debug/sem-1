  #include<stdio.h>
int main()
{
	int a[5],i,n,max;
	printf(" enter how many elements you want ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter %d number :",i );
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		   max=a[i];
	}
	printf("max is %d",max);
	return 0;
}

