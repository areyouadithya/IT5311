//Attendance Tracker
#include<stdio.h>
void main()
{
	int total,status,needtoattend,remaining;
	float min,minhr,log,fin,finalatt,currentatt;
	printf("Enter total number of hours in the course: ");
	scanf("%d",&total);
	printf("Enter the minimum attendance percentage required by the course: ");
	scanf("%f",&min);
	minhr=(min/100)*total;
	do{
		printf("Enter 1 if the course is still going on or 0 if the course has been completed: ");
		scanf("%d",&status);
	}
	while(status!=1 && status!=0);
	switch(status){
		case 0:
			printf("Enter the hours you've logged in so far: ");
			scanf("%f",&log);
			finalatt=(log/total)*100;
			printf("Your final attendance percentage is %f\n", finalatt);
			if(finalatt>=min)
				printf("You have passed the minimum attendance criteria :)\n");
			else
				printf("You have a shortage of attendance :(\n");
			break;
		case 1:
			printf("Enter the hours completed in the course so far: ");
			scanf("%f",&fin);
			printf("Enter the hours you've logged in so far: ");
			scanf("%f",&log);
			currentatt=(log/fin)*100;
			needtoattend=minhr-log;
			remaining=total-fin;
			if(currentatt>=min)
			{
				printf("Your current attendance percentage is %f", currentatt);
				printf("\nYou need to attend just %d classes more :)\n", needtoattend);
			}
			else
			{
				printf("Your current attendance percentage is %f", currentatt);
				if(needtoattend<=remaining)
					printf("\nYou can meet the minimum attendance criteria by attending %d more classes :)\n",needtoattend);
				else
					printf("\nYou cannot meet the minimum attendance criteria even if you attend all the reamining classes :(\n");
			}
			break;
	}
}
		
