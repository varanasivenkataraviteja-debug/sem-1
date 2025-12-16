#include<stdio.h>
void change(int*,int*);
int main()
{
	int a=20;int b=50;
	printf("Before %d %d ",a,b);
	change(&a,&b);
	printf("after %d %d ",a,b);
	return 0;
}
	void change(int*a,int*b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
		
	
		
	}
	
