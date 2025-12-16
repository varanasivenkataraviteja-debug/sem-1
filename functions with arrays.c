#include<stdio.h>
void display(int[],int);
int main()
{
	int a[10],n=5;
	display(a,n);
}
void display(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	  printf("%d",a[i]);
}
