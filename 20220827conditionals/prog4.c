//Area-and-Perimeter Calculator of different shapes

#include<stdio.h>
#include<math.h>
#define pi (3.14159265)

int main()
{
	int shape,length,breadth,base,height,side,radius,perimeter,area;
	printf("********AREA*AND*PERIMETER*CALCULATOR*********\n");
	printf("************FOR*DIFFERENT*SHAPES**************\n");
	printf("**********************************************\n");
	printf("************Select*any*one*shape**************\n");
	printf("****************1.RECTANGLE*******************\n");
	printf("******************2.SQUARE********************\n");
	printf("*****************3.TRIANGLE*******************\n");
	printf("******************4.CIRCLE********************\n");
	printf("**********************************************\n");
	printf("Enter the number corresponding to the shape: ");
	scanf("%d",&shape);
	switch(shape){
		case 1:
			printf("Enter the length: ");
			scanf("%d",&length);
			printf("Enter the breadth: ");
			scanf("%d",&breadth);
			perimeter=2*(length+breadth);
			area=length*breadth;
			break;
		case 2:
			printf("Enter the length of the side: ");
			scanf("%d",&side);
			perimeter=4*side;
			area=side*side;
			break;
		case 3:
			printf("Enter the base length: ");
			scanf("%d",&base);
			printf("Enter the height: ");
			scanf("%d",&height);
			printf("Enter the length of a side: ");
			scanf("%d",&length);
			printf("Enter the length of another side: ");
			scanf("%d",&breadth);
			perimeter=length+breadth+base;
			area=0.5*base*height;
			break;
		case 4:
			printf("Enter the radius: ");
			scanf("%d",&radius);
			perimeter=2*pi*radius;
			area=pi*radius*radius;
			break;
	}
	printf("The perimeter of the shape is %dunits and the area is %dsquare units.\n",perimeter,area);
	return 0;
}

