#include<stdio.h>
int main()
{
	int n,temp,sum=0;
	printf("enter number \n");
	scanf("%d",&n);
	while(n!=0)
	{
	  temp=n%10;
	  sum=sum+temp;
	  n=n/10;
	  
	} 
	printf("sum of given number %d",sum);
	return 0;
	
	
}
