#include<stdio.h>
void main()
{
    int x=5;
    int* p=&x;
    int** q=&p;
    int*** r=&q;
    printf("%d",x);
    printf("%d",*p);
    printf("%d",**q);
    printf("%d",***r);
    printf("%d",&p);
    printf("%d",*q);
    printf("%d",**r);
    printf("%d",&q);
    printf("%d",*r);
}