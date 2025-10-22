#include <stdio.h>
void india(){
    printf("pakistan is dead\n ");
    
    return;
}
void england(){
    printf("england\n");
    india();
    return;
}
void australia(){
    printf("india is the winner \n");
    england();
    return ;
}

int main(){
    australia();
   
  
       return 0;
}