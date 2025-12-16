#include<stdio.h>
int display(int *a1, int *b2)
{
  *a1=30;
  *b2=50;
  return *a1+*b2;	

}
int main()
{
	int a=10;
	int b=20;
	
	display(&a,&b);
	printf(" %d+%d=%d ",a,b,a+b);
	

}
