#include <stdio.h>

void main()
{
	//initialising counter varibles for iterating through the matrix
	int i,j,k,l,m;
	//initialising counter variables for keeping track of number of zeroes in each row
	int countr1=0;
	int countr2=0;
	int countr3=0;
	int countr4=0;
	int countr5=0;
	//creating a %5x5 matrix
	int arr[5][5]={{},{},{},{},{}};
	//looping through the matrix to get the value of each element as input from the user
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			do//do while loop to prevent values other than 1 and 0 being entered
			{
				printf("Enter the value of the element in row %d and column %d: ",i+1,j+1);
				scanf("%d",&arr[i][j]);
			}
			while(arr[i][j]!=0 && arr[i][j]!=1);
		}
	}
	//looping through the matrix to print each element and keep track of the number of zeroes in each row
	for(k=0;k<=4;k++)
        {
                for(l=0;l<=4;l++)
                {
              		printf("%d",arr[k][l]);
			switch(k){//switch to find what row the iteration is in and increment the zero counter accordingly
				case 0:
					if(arr[k][l]==0)
						countr1++;
					break;
				case 1:
					if(arr[k][l]==0)
						countr2++;
					break;
				case 2:
					if(arr[k][l]==0)
						countr3++;
					break;
				case 3:
					if(arr[k][l]==0)
						countr4++;
					break;
				case 4:
					if(arr[k][l]==0)
						countr5++;
					break;
			}
                }
		printf("\n");
        }
	//adding the zero counter variables to an array
	int brr[5]={countr1,countr2,countr3,countr4,countr5};
	int min=6;
	int row=0;
	//looping through the array to find the minimum value
	for(m=0;m<=4;m++)
	{
		if(brr[m]<min)
		{
			min=brr[m];
			row=m;
		}
	}
	printf("The minimum number of zeroes in a row is %d and in row number %d\n", min, row+1);
}
