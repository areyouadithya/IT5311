//Finding the largest number in an array
#include<stdio.h>
void main()
{
	int coll[]={1,2,3,4,5,34,12,22,44,645,9,66,1042};
	int i,j;
	int largest=0;
	int length=sizeof(coll)/sizeof(int);
	for(i=0;i<length;i++)
	{
		if(coll[i]>largest)
			largest=coll[i];
	}
	printf("The largest number in the array is %d\n",largest);	
}
