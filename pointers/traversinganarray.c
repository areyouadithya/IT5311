#include<stdio.h>
#include<string.h>
int main()
{
    char C[6]="Hello";
    char* charptr;
    for(charptr=C;charptr<=(C+5);charptr++)
    {
        printf("%c\n",*charptr);
    }
    printf("Length:%d",strlen(C));
    return 0;
}