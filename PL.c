//to calculate loss and profit 
#include <stdio.h>
int main (){
    float  L , P ,CP,SP;

    printf("enter cost price :");
    scanf("%f", &CP);
    printf("enter selling price:");
    scanf("%f", &SP);
    if (SP>CP) {
        printf("profit of %f is made ", SP - CP );
    
        
    }
    if (CP>SP) {
        printf("loss of %f is made ", CP- SP );

    }
    return 0;
}