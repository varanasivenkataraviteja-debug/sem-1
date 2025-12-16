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
	
	display(a,b);
	printf(" %d %d ",a,b);
	return 0;

}
