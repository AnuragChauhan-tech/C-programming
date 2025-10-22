//permutation and combination 


#include <stdio.h>
int factorial(int x){
   int fact =1 ;
   for(int i = 1 ; i<=x;i++){
   fact = fact * i ;
   }return fact;
   
   
  
}
int ncr(int n , int r){
   int ncr= factorial(n)/(factorial(r)*factorial(n-r));

   
}
int main(){
    int n , r  ;
    printf("enter n");   
    scanf("%d",&n);
    printf("enter r ");
    scanf("%d",&r);
    int combination = ncr(n,r);
    
     
     printf("%d",combination);


     


     return 0;
    
    }




