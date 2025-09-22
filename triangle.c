#include <stdio.h>
int main(){
    int a , b , c ;
    printf("enter the sides of the triangle \n");
    printf("enter a :\n");
    printf("enter b:\n");
    printf("enter c :\n");
    scanf("%d %d %d", &a , &b , &c);
    if ( a<(b+c) && b<(a+c) && c<(a+b)){
        printf("the triangle is valid \n");
    }
    else{
        printf("the triangle is not valid \n");
    }
            return 0;
    }
    



