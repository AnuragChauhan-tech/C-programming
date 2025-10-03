//wap a program to tell  a number is prime or not 
#include <stdio.h>
int main(){
    int n  ; 
    printf("Enter a number :");
    scanf("%d", &n);
    for(int i=2;i<n-1;i++){
        if(n % i==0){
            printf("the number is composite  \n");
            break;

        }else 
        printf("the number is prime \n ");
        break;
        
    }
    return 0;
}