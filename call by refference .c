#include<stdio.h>
void display(int *a1, int *b2)
{
	*a1=20;
	*b2=50;
}
int main()
{
	int a=10;
	int b=20;
	
	display(&a,&b);
	printf(" %d %d ",a,b);
	return 0;

}
