#include<stdio.h>
int main()
{
	int r,c,i,j,a[r][c];
	printf("Enter how many rows and columns you want ");
	scanf("%d %d",&r,&c);
	
	printf("Enter array elements:\n");
	for(i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			//printf("enter %d row and %d column element:",i,j);	
			scanf("%d ",&a[i][j]);
		}
	}
	printf("The elements in the matrix are ");
	
	for(i=0;i<r;i++)
	{
	 for (j=0;j<c;j++)
	 {
	 	printf("%d\t",a[i][j]);
	 }
	}
	return 0;
}
