//swap the first and last element 
#include <stdio.h>
int main(){
    int swap[5];
    printf("enter the elements:");

    for(int i=0;i<5;i++){
        scanf("%d", &swap[i]);

    }
    

    int first = swap[0];
    swap[0]=swap[4];
    swap[4]=first;
    int i;

    printf("after swaping :");
    for(int i=0;i<5;i++);
    
    printf("after swap: %d",swap[i]);
    return 0;




}