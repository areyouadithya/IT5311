//Printing sqaure, square root and cube of a number using functions
#include <stdio.h>
#include <math.h>

int input(int x){
	printf("Enter a number: ");
	scanf("%d",&x);
	return x;
}

int square(int x){
	return x*x;
}

float squareroot(float x){
	return sqrt(x);
}

int cube(int x){
	return x*x*x;
}

int output(int a, int b, float c, int d){
	printf("The square of %d is %d\n", a,b);
	printf("The square root of %d is %f\n", a,c);
	printf("the cube of %d is %d\n", a,d);
}

void main(){
	int start, num;
	num = input(start);
	output(num, square(num), squareroot(num), cube(num));
}
