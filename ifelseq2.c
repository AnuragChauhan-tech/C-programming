#include <stdio.h>
int main() {
    int a ;
    printf("enter a positive  3 digit number: \n");
    scanf("%d", &a);
    if(a>99 && a<1000 ){
        printf("it is a 3 digit number \n");

    }
    else{
        printf("it  is not a 3 digit number \n");

    }
    return 0;

}