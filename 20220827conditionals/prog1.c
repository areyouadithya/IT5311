//Voting Elegibility Checker
#include <stdio.h>

int main()
{
	int age;
	printf("\nEnter you age: ");
	scanf("%d",&age);

	if(age>0)
	{
		if(age>=18)
 		{
			printf("\nYou are eligible for voting :)\n");
		}	
		else
		{
			printf("You are not eligible for voting :(");
		}
	}
	else
	{
		printf("Enter a valid age -_-");
	}
	return 0;
}
