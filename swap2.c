//SWAP WITHOUT USING A THIRD VARIABLE (USE MATHEMATICS STATEMENTS)
#include <stdio.h>
int main(){
    int a , b ;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    a = a + b ;
    b = a - b;
    a = a-b;
    printf("the swaped values are %d %d ", a , b );
    return 0;
}