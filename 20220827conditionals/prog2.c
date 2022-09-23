//Electricity bill calculator

#include<stdio.h>

int main()
{
	int units,charges1,charges2,charges5;
	printf("Enter the number of units consumed: ");
	scanf("%d",&units);
	if(units<=100)
	{
		charges1,charges2,charges5=0;
	}
	else
	{
		if(units<=200)
		{
			units-=100;
			charges1=units*1;
			charges2,charges5=0;
		}
		else if(units<=300 && units>=201)
		{
			units-=200;
			charges2=units*2;
			charges1=100;
		}
		else
		{
			units-=300;
			charges5=units*5;
			charges2=200;
			charges1=100;
		}
	}
	printf("Your electricity bill sums to a total of %d\n",charges1+charges2+charges5);
	return 0;
}
