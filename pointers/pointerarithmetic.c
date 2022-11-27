#include<stdio.h>
void main(){
    int a=1025;
    int *p =&a;
    printf("Address p is %d\n",p); //say p is 2002
    printf("Size of integer is %d bytes\n",sizeof(int));
    printf("Address p+1 is %d\n",p+1); //p+1 is 2006 --> 2002+sizeof(int) --> 2022+4 --> 2006    
    char *p0;
    p0=(char*)p; //typecasting
    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Address of p0 is %d and value is %d\n",p0,*p0);
    printf("Address of p0+1 is %d and value is %d\n",p0+1,*(p0+1));
    printf("Address of p0+2 a is %d and value is %d\n",p0+2,*(p0+2));

}
