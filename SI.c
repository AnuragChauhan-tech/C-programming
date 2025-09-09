#include <stdio.h>
int main () {
    int p , r , t ;
    printf("enter the value of principle rate and time :");
    scanf (" %d %d %d", &p , &r ,&t);
    float si= (p*r*t)/100;
    printf("the simple interest is %f",si );
    return 0;


}