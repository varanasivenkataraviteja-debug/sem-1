 #include<stdio.h>
int main()
{
	int a[5],i,n,sum=0;
	printf(" enter how many elements you want ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter %d number :",i );
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum is :%d",sum);
	return 0;
}
