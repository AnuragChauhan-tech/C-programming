//storing and printing array 
#include <stdio.h>
int main(){
    int number[10];
    int i;
    printf("enter the elements of array:\n");
    for( i = 0 ; i<10 ; i++);{
    scanf("%d", &number[i]);
    }
        
    printf("you entered :\n");
    
    for( i=0;i<10;i++){
        printf("%d\n",number[i]);

    }
    return 0;

}
   