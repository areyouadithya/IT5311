//Basic Arithmetic Operations Calculator

#include <stdio.h>

int main()
{	
	 int op,a,b,result;
	 printf("**********BASIC ARITHMETIC OPERATIONS CALCULATOR**********\n");
	 printf("**********************************************************\n");
	 printf("Enter the first value: ");
	 scanf("%d",&a);
	 printf("Enter the second value: ");
	 scanf("%d",&b);
	 printf("******1.ADDITION*******\n");
	 printf("*****2.SUBTRACTION*****\n");
	 printf("****3.MULTIPLICATION***\n");
	 printf("******4.DIVISION*******\n");
	 printf("Enter the corresponding digit for the operation needed to perform: ");
	 scanf("%d",&op);

	 switch(op){
		 case 1:
			 result=a+b;
			 break;
		 case 2:
			 result=a-b;
			 break;
		 case 3:
			 result=a*b;
			 break;
		 case 4:
			 result=a/b;
			 break;
	 }
	 printf("The result of the operation between %d and %d is %d\n",a,b,result);
	 return 0;
} 

