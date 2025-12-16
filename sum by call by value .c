#include<stdio.h>
void display(int a, int b)
{
	a=20;
	b=50;
}
int main()
{
	int a=10;
	int b=20;
	int sum=a+b;
	
	display(a,b);
	printf(" %d+%d=%d ",a,b,sum);
	return 0;

}
