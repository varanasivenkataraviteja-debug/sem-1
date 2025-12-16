#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	printf("Enter size of the array :");
	scanf("%d",&size);
	int *array=(int *)malloc(size*sizeof(int));
	int sum =0,i;
	printf("enter %d array elements : ",size);
	for (i=0;i<size;i++)
	{
		scanf("%d",array+i);
		sum=sum+*(array+i);
		
	}
	printf("sum is : %d ",sum);
	return 0;
	
}
