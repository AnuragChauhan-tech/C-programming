//printf the nth fibonacci number 
#include <stdio.h>
int main(){
    int n;
    printf("enter the  numebr :");
    scanf("%d", &n);
    int a = 1, b = 1, sum= 1;
    for(int i=1 ;i<=n-2 ;i++){
        sum = a + b ;
        a = b ; 
        b = sum ; 
        printf(" %d\n",sum );
    }
   

    return 0;
     

}