//Mark-to-grade Converter

#include <stdio.h>

int main()
{
	int total,math,phy,chem,opt,eng;

	printf("Enter your Maths marks: ");
	scanf("%d",&math);
	printf("Enter your Physics marks: ");
	scanf("%d",&phy);
	printf("Enter your Chemistry marks: ");
	scanf("%d",&chem);
	printf("Enter your IP/Biology marks: ");
	scanf("%d",&opt);
	printf("Enter your Englsih marks: ");
	scanf("%d",&eng);
	
	total=math+phy+chem+opt+eng;

	if(total<250):	
		char grade[]="F";
	else if(total>=300 && total<350):
	{	
		char grade[]="D";
	}
	else if(total>=350 && total<400):
	{	
		char grade[]="C";
	}
	else if(total>=400 && total<450):
	{
		char grade[]="B";
	}
	else if(total>=450 && total<480):
	{
		char grade[]="A";
	}
	else if(total>=480):
	{	
		char grade[]="O";
	}

	printf("Your grade is %s\n",grade);
	return 0;
}
