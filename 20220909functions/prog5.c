#include <stdio.h>

int input(){
	int x;
        printf("Enter a number: ");
        scanf("%d",&x);
        return x;
}

int checkevenodd(int x){
	if(x%2==0)
		return 1;
	else
		return 0;
}

void clg(){
	printf("College of Engineering Guindy,\nAnna University,\nSardar Patel Road,\nGuindy, Chennai-6000025\n");
}
void home(){
	printf("A-26, ABC Street,\nXYZ Street,\nKangayampalayam,\nSulur, Coimbatore-641018\n");
}

void main(){
	int num=input();
	if(checkevenodd(num)==1)
		clg();
	else
		home();
}

