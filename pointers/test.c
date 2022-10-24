#include<stdio.h>
void main()
{
    int a;
    int *p;
    int b;
    a=5;
    p=&a;
    b=*p;
    printf("The value of a is %d\n",a);
    printf("The value at the address pointed to by p(*p) is %d\n",*p);
    printf("The value of p is %d\n",p);
    printf("The address of a(&a) is %d\n",&a);
    printf("The value of b(obtained by dereferencing p) is %d\n",b);
    printf("The address of b is %d\n",&b);
    printf("The address of p is %d\n",&p);    
}