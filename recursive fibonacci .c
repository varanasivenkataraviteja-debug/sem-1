#include<stdio.h>
int fibonacci(int i)
{
	if(i<=1)
	{
		return i;
	}
	else 
	    return fibonacci(i-1)+fibonacci(i-2);
}
int main()
{
	int i=0, n;
	printf(" Enter the number of terms in the fibonacci sequence :");
	scanf("%d",&n);
	printf("Fibonacci sequence : \n ");
	for (i=0;i<n;i++)
	{
		printf("%d ",fibonacci(i));
	}
	return 0;
}

	



