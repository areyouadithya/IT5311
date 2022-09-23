#include <stdio.h>
void main()
{
	int premise,spaces;
	int col1=0;
	int col2=0;
	int col3=0;
	int col4=0;
	do
	{
		printf("Enter the starting number(odd number): ");
		scanf("%d",&premise);
	}
	while(premise%2==0);

	int i,j,k;
	for(i=1;i<=4;i++)
	{
		int sum=0;
		for(j=1;j<=i;j++)
		{
			printf("%d  ",premise);
			sum+=premise;			
			switch(j)
			{
				case 1:
					col1+=premise;
					break;
				case 2:
					col2+=premise;
					break;
				case 3:
					col3+=premise;
					break;
				case 4:
					col4+=premise;
					break;
			}
			premise+=2;
		}
		spaces=4*(4-i);
		for(k=1;k<=spaces;k++)
		{
			printf(" ");
		}
		
		printf("%d",sum);
		printf("\n\n");
	}
	printf("%d  %d  %d  %d  \n",col1,col2,col3,col4);
}
