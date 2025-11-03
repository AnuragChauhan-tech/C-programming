//factorial using recursion
#include<stdio.h>
unsigned long long int factorial(int a){
    if(a==0 || a==1){
        return 1;//termination condition
    
    }
    else{
        return a*factorial(a-1);//recursion callll 

    }
    
}
int main(){
    int num ;//it can hold values upto 1.8 * 10power 19
    
    printf("enter the number :");
    scanf("%d",&num);
    if(num>20){
        printf("the number is to big to be calculated by int but \n ");
    }
    printf(" the factorial of %d is %llu\n",num,factorial(num));
    return 0;

}