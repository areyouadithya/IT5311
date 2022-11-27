#include <stdio.h>
int main()
{
    char C[5];
    C[0]='J';
    C[1]='o';
    C[2]='h';
    C[3]='n';
    C[4]='\0';
    printf("%s\n",C);
    printf("%d,%c\n",C,*C);
    printf("%d\n",C+1);
    printf("%d\n",C+2);
    printf("%d\n",C+3);
    printf("%d\n",C+4);
    printf("%d\n",C+5);

    return 0;
}