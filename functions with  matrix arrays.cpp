#include<stdio.h>
void display(int[10][10],int,int);
int main()
{
	int a[10][10],n=3,b=3;
	display(a,n,b);
}
void display(int a[10][10],int n,int b)
{
   int i,j;
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
   }
    for(i=0;i<n;i++)
    {
	  for(j=0;j<n;j++){
	  
	  printf("%d\t",a[i][j]);}
	
	printf("\n");}
}
