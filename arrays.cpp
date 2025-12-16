#include<stdio.h>
 int main()
{
	int a[10], i,n;
	printf("enter ho many elements you want ");
	scanf("%d",&n);
	printf(" enter elements");
	for(i=0;i<n;i++)
	{
     scanf("%d",&a[i]);
     
	}
	printf(" the elements are ");
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}
