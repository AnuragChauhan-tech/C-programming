//permutation and combination 


#include <stdio.h>
int main(){
    int n , nfact = 1 , r  ;
    printf("enter n");   

    scanf("%d",&n);
    printf("enter r ");
    scanf("%d",&r);
     for(int i=1;i<=n;i++){
         nfact =nfact*i;
         

     }
    
    

     int rfact= 1 ;
     for(int i=1;i<=r;i++){
        rfact=rfact*i;


     }
     int nrfact=1;
     for(int i=1;i<=n-r;i++){
        nrfact=nrfact*i;
     }
     int ncr= nfact/(rfact*nrfact);
     printf("%d",ncr);


     


     return 0;
    
    }




