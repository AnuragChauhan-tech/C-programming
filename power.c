//two numbers are entered through the keyboard .write a program to find the value of one number raised to power of other.



#include <stdio.h>
int main(){
     int n,m;
    printf("enter the  base  :");
    scanf("%d", &n);
    printf("enter power :");
    scanf("%d", &m);
    int power  = 1 ; 
    for(int i=1;i<=m;i++){
        power= power*n;
    }
    printf("the result is %d", power);
    

 
    return 0;



}
   








 




