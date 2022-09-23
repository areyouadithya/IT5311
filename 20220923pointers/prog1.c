//Program to swap two values using pointers
#include <stdio.h>
int swap(int *x, int *y)
{
	int temp = *x;
    	*x=*y;
    	*y=temp;
}
void main()
{	
	int a,b;
	int c=0;
	int d=0;
	printf("Enter first number a: ");
	scanf("%d",&a);
	printf("Enter second number b: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("After swapping, a=%d and b=%d\n",a,b);
}

