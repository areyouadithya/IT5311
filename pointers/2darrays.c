#include <stdio.h>

void main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    printf("%d\n",arr);
    printf("%d\n",&arr[0][0]);
    printf("%d\n",arr[0]);
    printf("%d\n",*arr);
    printf("%d\n",&arr[0]); 
    //all of the above give the same
    }